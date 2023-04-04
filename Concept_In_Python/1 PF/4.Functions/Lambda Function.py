###Calculating the Even or Odd Using lambda###

even_or_odd =  lambda num: 'Even' if num%2==0 else 'Odd'

print(even_or_odd(20))

###Simple FUnction vs lambda###

def cube(n):
    print(f'The Cube of the Given Number is {n**3}')
cube(3)

cube1 = lambda num: num**3
cube1(3)

###Using lambda###

lst = [2,3,5,3,1,0]
sort_list = sorted(lst, key = lambda x : x)

print(sort_list)