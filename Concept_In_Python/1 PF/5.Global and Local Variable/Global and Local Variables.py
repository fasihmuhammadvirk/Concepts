###Local and Global###

def func():
    local_variable = 'I am Local Variable'
    print(local_variable)
    print(global_variable)
    
global_variable = 'I am a Global Variable'
func()

#Output: I am Local Variable
#Output: I am a Global Variable


###Making Local Variable Global###

def func1():
    global local_variable
    local_variable = "I am global variable"
    print("Inside Function "  , local_variable)

func1()
print('Outside Function ',local_variable)


# Inside Function  I am global variable
# Outside Function  I am global variable