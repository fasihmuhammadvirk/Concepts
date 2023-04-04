###Simple While Loop##

count = 0 
while count < 3:
    count += 1
    print('Hi')

###While Loop with List###

lst = [1,2,3,4]

while lst:
    print(lst)
    lst.pop()

###Single Line While Loop###

while lst: print(lst);lst.pop()

###Infinite While Loop###

count = 0 
while True:
    
    if count < 3:
        print(count)
        count += 1
    else:
        break 
