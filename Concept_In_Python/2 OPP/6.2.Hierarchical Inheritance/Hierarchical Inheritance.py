###Simple Example of Hierarchical Inheritance###

# base class
class Animal:
  def eat(self):
    print("Eating...")

# derived class 1
class Dog(Animal):
  def bark(self):
    print("Barking...")

#derived class 2
class Cat(Animal):
  def meow(self):
    print("meowing...")

# drivers code
print("Dog is")
dog = Dog()
dog.eat()
dog.bark()

print("Cat is")
cat = Cat()
cat.eat()
cat.meow()