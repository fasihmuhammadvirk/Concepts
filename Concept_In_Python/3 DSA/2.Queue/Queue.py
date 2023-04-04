from collections import deque

import time
import threading

Orders_List = ['pizza', 'samosa', 'pasta', 'biryani', 'burger']

class Queue:
    def __init__(self):
        self.buffer = deque()
    def enqueue(self,val):
      self.buffer.appendleft(val)
    def deqeue(self):
      if len(self.buffer) == 0:
        print("Queue is Empty")
        return
      return self.buffer.pop()
    def is_empty(self):
      return len(self.buffer) == 0
    def size(self):
      return len(self.buffer)
    def front(self):
      return self.buffer[-1]
q = Queue()

class Orders:
    def place_order(self,porder):
        order_number = 1
        for items in porder:
            print(f"Placing {order_number} Order {items} Now!")
            q.enqueue(items)
            print("Next Costumer Wait For A While\n")
            time.sleep(0.5)
            order_number += 1
    def Serve_order(self):
        for items in range(q.size()):
            print(f"Serving {items+1} Order Now! , Pick Up Your Order")
            q.deqeue()
            print("Next Costumer Wait For A While\n")
            time.sleep(2)
o = Orders()

placeorder = threading.Thread(target= o.place_order ,args = (Orders_List,))
serveorder = threading.Thread(target= o.Serve_order )

print("We Start Placing\Serving Order From Here \n")

placeorder.start()
time.sleep(1)
serveorder.start()
placeorder.join()
serveorder.join()

print('All Order are Served')



