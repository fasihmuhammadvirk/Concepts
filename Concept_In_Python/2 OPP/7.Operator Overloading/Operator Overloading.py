# operator overloading
class Sample:
  def __init__(self,a,b):
    self.a = a
    self.b = b
  def __addition__(self):
    return self.a + self.b
  def __add__(self,other):
    return self.a + other.a, self.b + other.b


# driver code
obj1 = Sample(2,3)
obj2 = Sample(4,5)
obj3 = obj1 + obj2
print(obj3)
