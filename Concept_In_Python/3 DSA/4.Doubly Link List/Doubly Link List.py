
class NodeD:

    def __init__(self, data):
        self.data = data
        self.previous = None
        self.next = None


class Doublelinkedlist:

    def __init__(self):
        self.head = None
        self.tail = None
        self.ctr = 0

    def Insert(self, Data):

        newNode = NodeD(Data)

        if (self.head == None):

            self.head = self.tail = newNode
            self.head.previous = None
            self.tail.next = None


        else:

            self.head.previous = newNode
            newNode.next = self.head
            newNode.previous = None
            self.head = newNode


    def deletearbitary(self, index):

        node_del = NodeD(index)
        if self.head == None:
            print("Node is Empty")
        else:
            if  self.head == node_del:
                self.head = self.head.next
                self.head.previous = None
                self.ctr -= 1

            else:
                temp = self.head

                while temp.next is not None:
                    
                  if temp == node_del:
                    break
                  else:
                    print(temp.data,"\n")
                    temp = temp.next

                print("Node deleted", temp.data)
                temp.previous.next = temp.next
                temp.next.previous = temp.previous
                temp.next = None
                temp.previous = None
                self.ctr -= 1
                return

    def search_book(self):

        curNode = self.head
        if (self.head == None):
            print("This Library Has No Book Like this : Sorry")
            return

        while (curNode is not None):
            #if curNode.data == booktosearch:
            print(f"The Book You Looking for is Available {curNode.data}")
                #break
            #else:
            curNode = curNode.next

d = Doublelinkedlist()

d.Insert("Book1")
d.Insert("Book2")
d.Insert("Book3")
d.Insert("Book4")
d.Insert("Book5")
d.Insert("Book6")
d.search_book()
d.deletearbitary("Book5")
d.search_book()