###Simple Example of Multiple Inheritance###

#Base Class 1 
class Name:
    
    def __init__(self,name):
        self.name = name 

    def print_name(self):
        print(self.name)

#Base Class 2
class ID:
    
    def __init__(self,id):
        self.id = id  
    
    def print_id(self):
        print(self.id)

#Derived Class
class Employee(Name,ID):
    
    def __init__(self,name,id):
        Name.__init__(self,name)
        ID.__init__(self,id)

    def print_reg_id(self):
        print(f'Employee Name is {self.name}')
        print(f'Employee ID is {self.id}')

#Main Code 
e1 = Employee('Fasih',23)

e1.print_name()
e1.print_id()
e1.print_reg_id()

# Output
#
# Fasih
# 23
# Employee Name is Fasih
# Employee ID is 23