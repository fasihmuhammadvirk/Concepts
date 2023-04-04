###Simple Example of abstract and a concrete method###

from abc import ABC, abstractmethod
class Animal(ABC):
  @abstractmethod
  def fun(self):     # abstract method
    pass
  @abstractmethod
  def fun1(self):
    pass
  def print(self):    # concrete method
    print("This is concrete method")

class Cat(Animal):
  def fun(self):
    print("This is cat class")
  def fun1(self):
    print("meow meow")
  def printing(self):
    print("This is child class function")

#driver code
c = Cat()
c.fun()
c.fun1()
c.print()
c.printing()

# Output
# This is cat class
# meow meow
# This is concrete method
# This is child class function