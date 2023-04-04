###Simple If and Else###

a,b =10,20

if a > b:
    print('A is Greater than B')
else:
    print('B is Greater than A')


###if else and elif###

a,b,c = 1,2,3

if a > b:
    print('a is greater than b')
elif a > c :
    print('a is greater than c')
else:
    print('a is less than b and c')

###Using and or in if else:

if 10>20 and 20<10:
    print(False)
elif 10<20 or 20>10:
    print(True)
else:
    print('Nothing')

###One Line If Statement###
number = 2
even_or_odd = 'Even' if number%2==0 else 'Odd'

###if with in###

lst = [0,1,2,3,4,5]

if 1 in lst:
    print(True)
else:
    print (False)

