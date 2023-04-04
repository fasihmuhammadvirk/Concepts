###Simple For Loop###

for _ in  range(9):
    print('Hello')

###For-Else Loop###

for i in range(5):
    print(i)
else:
    print('Done')


###Using Else With For Loop###

emp = ['E1','E2','E3']

for i in emp:
    print('Employee Found')
else:
    print('No Employee Left')


###for loop with range()###

for i in range(9):
    print(i)

###for loop from certain integer to another integer###

for i in range(10,15):
    print(i)

#Output
# 10
# 11
# 12
# 13
# 14

###For Loop iteration on list###

lst = [1,2,3,4,5,6,7]

for i in lst:
    print(i)


#Output 
# 1
# 2
# 3
# 4
# 5
# 6
# 7

###For Loop with String###

hello = "I am a String"

for i in hello:
    print(i)

#for loop with the len of the string
for i in range(0,len(hello)):
    print(i)


###Break Statement in For Loop###

for i in range(9):
    
    if i == 6:
        break
    print(i)

# Output
# 0
# 1
# 2
# 3
# 4
# 5