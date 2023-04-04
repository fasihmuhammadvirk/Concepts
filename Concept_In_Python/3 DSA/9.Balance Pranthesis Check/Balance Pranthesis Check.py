from collections import deque
class Stack : 
    def __init__(self):
        self.container=deque()
    def push(self,val):                           
        self.container.append(val)
    def pop(self):                                
        return self.container.pop()
    def top(self):                              
        return self.container[-1]
    def is_empty(self):                          
        return len(self.container)==0
    def size(self):                              
        return len(self.container)



def check_parenthesis(expression):                     
    s=Stack()
    parenthesis = {'(':')','[':']','{':'}'}            
    for x in expression:                                
        if x in parenthesis.keys():                                       
            s.push(x)                                  
        elif x in parenthesis.values():                
            popped = ""                                
            if not s.is_empty():
                popped = s.pop()
            if s.is_empty() and popped == "":
                print("Invalid Expression , not balanced")
                return
    if s.is_empty():
        print("Valid Expression")
    else:
        print("Invalid Expression")


check_parenthesis("{a+b}")                          #Valid Expression

check_parenthesis("))((a+b}{")                      #Invalid Expression