#include<iostream>
using namespace std;

class queue 
{
public:   
    //const int arrsize = 200;
    int size;
    int *queuearr;
int front , rear ;
   
queue() {
      front = -1;
      rear = -1;
      for (int i = 0; i < size; i++) {
        queuearr[i] = 0;
      }
    }
bool isempty()
{ 
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}


bool isfull()
{
    if (rear == sizeof(queue)-1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
void enqueue(int element)
{
    if (isfull())
    {
        cout<< "No Space\n"
               "The Queue is Full"<<endl;
    }
    else if (isempty())
    {
        rear = 0;
        front = 0;
        queuearr[rear] = element;
    }
    else 
    {
        rear ++;
        queuearr[rear] = element;
    }
  
}
int dequeue() {
    int x = 0;
    if (isempty()) {
      cout << "The Queue is Empty" << endl;
      return x;
    } else if (rear == front) {
      x = queuearr[rear];
      rear = -1;
      front = -1;
      return x;
    } else {
      cout << "front value: " << front << endl;
      x = queuearr[front];
      queuearr[front] = 0;
      front++;
      return x;
    }
  }

  int count() {
    return (rear - front + 1);
  }
  void display() {
    cout << "The Element in the Queue are : " << endl;
    for (int i = 0; i < size; i++) {
      cout << queuearr[i] << "  ";
    }
  }


};

int main ()
{
    queue q1;
  int value, option;
      cout << "Enter size of queue";cin>>q1.size;
       q1.queuearr = new int [q1.size];
     
  do {
    cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. count()" << endl;
    cout << "6. display()" << endl;
    
    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout <<"Enqueue Operation"<<endl;
      for (int i =0 ;i < q1.size ; i++)
      {
      cout << "Enter the "<< i+1 << " in the Queue" << endl;
      cin >> value;
      q1.enqueue(value);
      }
      break;
    case 2:
      cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
      break;
    


    case 3:
      if (q1.isempty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is not Empty" << endl;
      break;
    case 4:
      if (q1.isfull())
        cout << "Queue is Full" << endl;
      else
        cout << "Queue is not Full" << endl;
      break;
    case 5:
      cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
      break;
    case 6:
      cout << "Display Function Called - " << endl;
      q1.display();
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
    
}
