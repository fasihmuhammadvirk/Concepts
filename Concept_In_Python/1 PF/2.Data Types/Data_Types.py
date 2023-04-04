###Integer###

val = 0 
val1 = 21 

###Strings###


s_val  = 'This is a String'
s_val2 = "This is a String in Double Quotation"
s_val3 = "This is a 'String' with double and Single Quotation"

###Boolean### 
a = 10
b = 11

print(a>b)
print(a<b)
print(a==b)

print(bool(a))
print(bool(b))

T = True
F = False

###List###

empty_lst = []

lst = [1,'String',True,]
print(lst[1])#Output: String

empty_lst.append('a') #appending to a list 
empty_lst.insert(0,'b') #inserting into a list at a specific location 


###Tuples###

tup = (1,'a','String',True)
print(tup) #Output: (1,'a','String',True)
print(tup[0]) #Output: 1 

###Dictionaries### 

empty_dic = {}


empty_dic[1] = 'First Item' #Adding Item into an Empty List
empty_dic[2] = 'Second Item' #Adding Item into an Empty List

dic1 = {1:'First',2:'Second',3:'Third'} #Dictionary with integer as value key 
print(dic1[1])#Output: First

dic2 = {'First':1,'Second':2} #Dictionary with String as value key 
print(dic2['First'])#Output: 1

dic3 = {1:[1,'String',True,],2:(1,'a','String',True)} #Dictionary with the list and tuple as value
print(dic3[1][1]) #Output: String

dic4 = {1:'First Item',2:'Second Item',3:{1:'First',2:'Second'}} #Nested Dictionary
print(dic4[3][1]) #Output: First 