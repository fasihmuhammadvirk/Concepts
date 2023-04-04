
###A Simple Class With Multiple Objects###

class Employee:
    
    def __init__(self,name ,id):
        #Instance Variable
        self.name = name 
        self.id = id 
    
    #Class Function
    def printing(self):
        
        print('Employee Name is: ',self.name )
        print('Employee ID is: ',self.id)

e1 = Employee('Ali',21)     # A Class Object
e2 = Employee('Masif',22)   # Another Class Object
e3 = Employee('Fasih',23)
e4 = Employee('Aoun',24)

e1.printing()
e2.printing()
e3.printing()
e4.printing()
