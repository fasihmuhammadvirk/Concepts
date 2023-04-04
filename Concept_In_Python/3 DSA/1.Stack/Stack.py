from collections import deque

class Stack:
  def __init__(self):
    self.container=[]
  def push(self,val):
    self.container.append(val)
  def pop(self):
    return self.container.pop()
  def top(self):
    return (self.container[-1])
  def is_empty(self):
    return len(self.container)==0
  def size(self):
    return len(self.container)
  def print_stack(self):
    for x in range(self.size()):
      print(self.container.pop())

s = Stack()

s.push('First Value')
s.push('Second Value')

s.pop() #Second Value will be Poped

s.top() #First Value

s.is_empty #False 

s.size # 1

s.print_stack # First Value 

