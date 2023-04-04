
###Example of Class Variable###

class simple_class:
    
    pc_name = 'This is a Class Variable'
    
    def output(self):
        print('This is a Class Function')

print(simple_class.pc_name)

# Output
# This is a Class Variable


###Example of Instance Variable###

class simple_class2:
    
    def __init__(self,val):
        self.instance_variable = val
    
    def output(self):
        print('The Value of the Instance Variable is :',self.instance_variable)

obj = simple_class2(23)
obj.output()

# Output
# The Value of the Instance Variable is : 23

