

from collections import deque
class infix_to_prefix:

#Setting the precedence of arthametic operators
    operator_precedence = {'^': 5, '*': 4, '/': 4, '+': 3, '-': 3, '(': 2, ')': 1}
#creating the stack
    def __init__(self):
        self.stack = deque()
#creating the push function
    def push(self, value):
        self.stack.append(value)
#creating the pop funtion
    def pop(self):
        if self.isempty():
            return 0
        else:
            return self.stack.pop()
#creating the isempty function
    def isempty(self):
        if (self.size() == 0):
            return True
        else:
            return False
#creating the seek function
    def seek(self):
        if self.isempty():
            return False
        else:
            return self.stack[-1]
#creating a function to calculate the size of the stack
    def size(self):
        return len(self.stack)
#creating the function to check if it is an operator or not
    def is0perand(self, i):
        if i.isalpha() or i in '1234567890':
            return True
        else:
            return False
#creating the reverse function for the brackets
    def reverse(self, expr):
        rev = ""
        for i in expr:
            if i ==  '(':
                i = ')'
            elif i == ')':
                i = '('
            rev = i + rev
        return rev
#creating the function to convert the infix to prefix
    def infixtoprefix(self, expr):
        prefix = ""
        for i in expr:
            if (len(expr) % 2 == 0):
                print("Incorrect infix expr")
                return False
            elif (self.is0perand(i)):
                prefix += i
            elif (i in '+-*/^'):
                while (self.size() and self.operator_precedence[i] < self.operator_precedence[self.seek()]):
                    prefix += self.pop()
                self.push(i)
            elif i == '(':
                self.push(i)
            elif i == ')':
                val = self.pop()
                while val != '(':
                    prefix += val
                    val = self.pop()
            # end of for
        while len(self.stack):
            if (self.seek() == '('):
                self.pop()
            else:
                prefix += self.pop()
        return prefix

#calling all the functions

class_object = infix_to_prefix()
expression = input('Enter a Expression: ')
reverse = ""
reverse  = class_object.reverse(expression)
result = class_object.infixtoprefix(reverse)
if (result != False):
    prefix = class_object.reverse(result)
    print(f"The Prefix Expression of ' {expression} ' is{prefix}")


