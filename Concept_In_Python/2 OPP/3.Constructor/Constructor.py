###A Simple Constructor###

class concepts:
    
    #A default Constructor
    def __init__(self):
        self.name = 'This is a Variable in the Constructor'
    
    #A method to print the data member
    def printing(self):
        print(self.name)

#creating the object for the class to call its method , variables         
Object = concepts()

#calling the instance method using the object 
Object.printing() #Output: This is a Variable in the Constructor


###Constructor with parameters###

class constructor_with_parameter:
    
    def __init__(self,name,age,height):
        self.name = name 
        self.age = age 
        self.height = height
    
    def printing(self):
        print(f'''
              The name of the Person is {self.name}
              The Age of the Person is {self.age}
              The Height of the Person is {self.height}
              ''')

obj = constructor_with_parameter('Fasih',22,5.4)

obj.printing()

# Output:
#   The name of the Person is Fasih
#   The Age of the Person is 22
#   The Height of the Person is 5.4