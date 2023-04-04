def insertionsort(arr):
      n = len (arr)
  for i in range(1,n):
    key = arr[i]
    j = i-1
    while j>=0 and key < arr[j]:
      arr[j+1] = arr[j]
      j -= 1
    arr[j+1] = key
arr = [2,3,4,2,1]
numbers = input("Enter any Numbers (Seperated by Commas): ").split(",")
arraytosort = []
for i in numbers:
   arraytosort.append(int(i))
insertionsort(arraytosort)
for i in range(len(arraytosort)):
  print(arraytosort[i],end= "\n")