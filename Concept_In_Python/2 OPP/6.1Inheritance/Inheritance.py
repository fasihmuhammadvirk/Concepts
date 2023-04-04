###Simple Example of Inheritance###

class A:
    
    def __init__(self,name):
        self.name = name
        print(f'This is the parent class constructor: {self.name}')

    def display(self):
        print('Parent Class Method')
        
class B(A):
    
    def show(self):
        print('This is the child class method')

#In inheritance if the child class didnot have any constructor it invoke the parent class constructor
obj = B('Fasih')

# Output
# This is the parent class constructor: Fasih


obj1 = B() # This will show Error as the one argument is missing 


###Inheritance and Parent Constructor#### 

# parent class
class Person(object):

	# __init__ is known as the constructor
	def __init__(self, name, idnumber):
		self.name = name
		self.idnumber = idnumber

	def display(self):
		print(self.name)
		print(self.idnumber)

# child class


class Employee(Person):

	def __init__(self, name, idnumber, salary, post):
		self.salary = salary
		self.post = post

		# invoking the __init__ of the parent class
		Person.__init__(self, name, idnumber)


# creation of an object variable or an instance
a = Employee('Fasih', 23, 1500, 'Computer Scientist')

# calling a function of the class Person using its instance
a.display()
