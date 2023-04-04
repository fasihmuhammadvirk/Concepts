def mergeSort(arr):
      if len(arr) > 1:
        
    mid = len(arr)//2   
    left = arr[:mid]
    right = arr[mid:]
     
          
    mergeSort(left)
    mergeSort(right)
    
    i = j = k = 0
    
    # Copy data to temp arrays L[] and R[]
    #Then replace the data of L[] and R[] in the Given Array arr[]
    #if the let sub array L[] is less than right sub array R[]
    #then arr[] = L[] else arr[] = R[] 
    
    #Time Complexcity will remain O(n) but we dont have to create a seperate sorted array
    #we will sort the given array by replacing its value with left and right sub array
    #depending on their values if greater or lesser
    #By doing this we will use less space then the code in the lab 

    while i < len(left) and j < len(right):
      if left[i] < right[j]:
        arr[k] = left[i]
        i += 1
      else:
        arr[k] = right[j]
        j += 1
      k += 1
    

    # Checking if any element was left
    while i < len(left):
      arr[k] = left[i]
      i += 1
      k += 1
    
    while j < len(right):
      arr[k] = right[j]
      j += 1
      k += 1 

    

    

def printList(arr):
  for i in range(len(arr)):
    print(arr[i], end=" ")
  print("\n")
  

arraytosort = input("Enter any Numbers (Seperated by Commas): ").split(",")

print("Given array is", end="\n")
printList(arraytosort)
mergeSort(arraytosort)
print("Sorted array is: ", end="\n")
printList(arraytosort)