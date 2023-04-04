###List Comprehension###

lst = [i for i in range(9)]
print(lst)

a_list = [-3,-2,-1,0,1,2,3]


double_the_list = [i**2 for i in a_list]

less_than_one = [i for i in a_list if i<0]

###Taking Input from User###

lst_user = input('Enter the integer separated by commas "," ').split(',')
print(lst_user)


