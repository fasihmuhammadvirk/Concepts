###Destructor in Python###

class Employee:

	# Initializing
	def __init__(self):
		print('Employee created.')

	#Calling destructor
	def __del__(self):
		print('Destructor called, Employee deleted.')

obj = Employee()
del obj
