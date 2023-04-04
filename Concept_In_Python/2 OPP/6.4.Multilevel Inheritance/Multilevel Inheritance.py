###A simple Example of Multilevel Inheritance###

#Parent Class or Base Class
class Animal:
    
    def eat(self):
        print('Eating')

#Child Class or Intermediate Class
class Cat(Animal):
    
    def moew(self):
        print('Meowww...')

#GrandChild Class or Derived Class
class My_Cat(Cat):
    
    def sleep(self):
        print('Sleeping')


cat_object = My_Cat()

cat_object.eat()
cat_object.moew()
cat_object.sleep()

# Output
# Eating
# Meowww...
# Sleeping