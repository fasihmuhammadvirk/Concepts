from collections import deque
class evaluation_of_prefix:


    def __init__(self):
        self.stack = deque()
#creating the is_em[ty function to check if the stack is empty or not
    def isEmpty(self):
        if(self.size() == 0):
            return True
        else:
            return False
#creating the push function to add element in the stack
    def push(self,item):
        self.stack.append(item)

# creating the size function to check the size of the stack
    def size(self):
        return len(self.stack)

# creating the pop function to pop the value form the stack
    def pop(self):
        if self.isEmpty():
            return 0
        else:
            return self.stack.pop()

# creating the top function for fetching the last value form the stack

    def top(self):
        if self.isEmpty():
            return False
        else:
            return self.stack[-1]
#creating the evaluate function to evaluate the prefix expression
    def evalute_to_prefix(self,expression):
        for i in reversed(expression):
            if i in '0123456789':
                self.push(i)
            else:
                opreand1 = self.pop()
                opreand2 = self.pop()
                result   = self.cal(opreand1,opreand2,i)
                self.push(result)
        return self.pop()
#creating the function to calculate the given number using the given operand
    def cal(self,opreand1,opreand2,i):

        if i == '*':
            return int(opreand1)*int(opreand2)
        elif i == '/':
            return int(opreand1)/int(opreand2)
        elif i == '+':
            return int(opreand1)+int(opreand2)
        elif i == '-':
            return int(opreand1)-int(opreand2)
        elif i == '^':
            return int(opreand1)^int(opreand2)

classobject = evaluation_of_prefix()

print("You Can Only Enter Integers")
expressions = input('Enter The Expression Of The Prefix: ')
print(expressions)
value = ""
value = classobject.evalute_to_prefix(expressions)
print(f'The result of postfix expression " {expressions} " is {value}')


	

    
