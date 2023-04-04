from collections import deque
stack = deque()
tempstack = deque()

class Node:
  def __init__(self,info): 
    self.info = info 
    self.left = None 
    self.right = None 
    self.level = None 
  def __str__(self):
    return str(self.info)


class searchtree:
  def __init__(self): 
    self.root = None
  def create(self,val): 
    if self.root == None:
      self.root = Node(val)
    else:
      current = self.root
      while 1:
        if val < current.info:
          if current.left:
            current = current.left
          else:
            current.left = Node(val)
            break;
        elif val > current.info:
          if current.right:
            current = current.right
          else:
            current.right = Node(val)
            break;
        else:
          break;

  def rinorder(self,node):
    if node is not None:
      self.rinorder(node.left)
      print(node.info,end = " ")
      self.rinorder(node.right)

  def rpreorder(self,node):
    if node is not None:
      print(node.info,end = " ")
      self.rpreorder(node.left)
      self.rpreorder(node.right)

  def rpostorder(self,node):
    if node is not None:
      self.rpostorder(node.left)
      self.rpostorder(node.right)
      print(node.info,end = " ")
      

  def inorder(self,node):
    
    curr = node
    while stack or curr:
 
        if curr:
            stack.append(curr)
            curr = curr.left

        else:
           
            curr = stack.pop()
            print(curr.info , end=' ')
            curr = curr.right
 

  def preorder(self,node):
   
    stack.append(node)
    while stack:
      node = stack.pop()
      print(node.info,end = " ")
      if node.left != None:
        stack.append(node.left)
      if node.right != None:
        stack.append(node.right)
 
        
            
   
  def postorder(self,node):
     
    stack.append(self.root)
     
    while stack:
         
        node = stack.pop()
        tempstack.append(node)
     
        if node.left:
            stack.append(node.left)
        if node.right:
            stack.append(node.right)
    while tempstack:
        node = tempstack.pop()
        print(node.info,end = " ")            
  
    

tree = searchtree()


 

number = [] 
print("Creaing a Tree From Values\n")
for i in number :
  print(i,end = " ")
  tree.create(i)

print("\n")
print("\n**** Traversal With Recurion ****\n")
print("Inorder Traversal")
tree.rinorder(tree.root)
print("\n")
print("Preorder Traversal")
tree.rpreorder(tree.root)
print("\n")
print("Postorder Traversal")
tree.rpostorder(tree.root)


print("\n")
print("\n**** Traversal Without Recurion ****\n")
print("Inorder Traversal")
tree.inorder(tree.root)
print("\n")
print("Preorder Traversal")
tree.preorder(tree.root)
print("\n")
print("Postorder Traversal")
tree.postorder(tree.root)





