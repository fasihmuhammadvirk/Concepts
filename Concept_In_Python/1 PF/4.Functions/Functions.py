###A Simple Function###
def func():
    print('I am a Function')

func()#calling a function

###Function to Check if a number is Even or Odd###

def even_or_odd(n):
    lst = ['Even','Odd']
    return lst[0] if n%2 ==0 else lst[1] 

number = even_or_odd(2)
print(number) #Output: Even

###UnderStanding Return Statement###

def func1():
    a = 10 
    print('This is Before Return Statement')
    return a 
    print('THis is after the return statement')#This line of code will never get executed as any line of code after return will not be executed 

print(func1())  
#Output: This is Before Return Statement
#Output: 10

###Function as Object###

def func_obj(name):
    return f'Hi {name}'

print(func_obj('Fasih Muhammad Virk'))

as_an_object = func_obj

print(as_an_object('Fasih'))