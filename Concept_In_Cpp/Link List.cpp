#include<iostream>
using namespace std;

class Node 
{
    int data;
    Node *Next;
public :
    void insert (int x);
    void display ();
    void deletelist();
    int  searching(int data);
    void update();
    
};
Node *head;
int  Node::searching(int data)
{
cout << "welcome"<<endl;
        int index = 0;
        Node *current = new Node;
        current->Next = head;
    while (current != NULL)  
    {
        if (current->data == data )
        {
        return index;}
        current =  current->Next;
	index++;
    }
        return -1;
	

}



void Node::insert(int x)
{
    int number;
    for (int i = 0 ;i < x  ; i++)
    {        
    cout << "Enter the "<< x - i  <<" Number: ";cin >> number; 
    Node *temp = new Node();
    temp->data = number;
    temp->Next= head;
    head = temp;
    
    }

}
void Node::display()
{
    
    Node *current = new Node;
    current-> Next = head;
    while (current!=NULL)  
    {
        cout << current-> data << endl; 
        current = current->Next;  
    }
  
}
void Node::deletelist()
{
int deletion;
    cout << "Which value do you want to delete from the list? ";
    cin >> deletion;

    Node *prev = head;
    Node *current = head->Next;

    while (current)
    {
        if (current->data == deletion){
            prev->Next = current->Next;
            delete current;
            return;
        }
        prev = current;
        current = current->Next;
    }
    if (!current){
        cout << "That value is not in the list" << endl;
    }

}






void Node::update()
{
    int old;
    int news;
    Node *current = head;
    cout << "Enter the old Node you want to Update";cin >> old;
    cout << "Enter the new Node you want to Update instead of old";cin >> news;


   
   if(head==NULL) {
      cout <<"Linked List not initialized"<<endl;
      return;
   }
   int pos = 1;
   while(current->Next!=NULL) {
       
      if(current->data == old) {
         current->data = news;
         cout <<"\n "<<old <<" found at position "<< pos << " replaced with "<<news<<endl;
         return;
      }
      
      current = current->Next;
      pos++;
   }
   
   cout<<old<<"does not exist in the list\n";
   Node::display();

}

int main ()
{
    int choice;
    head=NULL;
    Node h;
    int size,number,data;
   
    do {  
   cout<<"Press 1 for Incertion"<<endl;
   cout<<"Press 2 for Deletion"<<endl;
   cout<<"Press 3 for Update"<<endl;
   cout<<"Press 4 for searching"<<endl;
   cout<<"Press 5 for Display"<<endl;
   cout<<"Press 6 to  Exit"<<endl;
   
      cout<<"Enter your choice :-> ";cin>>choice;
      switch (choice) {
        






 case 1: { 
             
             cout <<"Enter the size of the link -> ";
        cin>> size;
        h.insert(size);
    
             }
         break;
         case 2: {
             h.deletelist();
             }
         break;
         case 3: {
             cout <<"Update the value"<<endl;
             h.update();
             }
         break;
         case 4: {
        cout <<"Enter the Node you want to find";
        cin >> data;
        int index = h.searching(data);
        cout<< "It is present at : "<<index;


             }
         break;
         case 5: { 
             h.display();
             }
         break;
         case 6: { 
             cout <<"~Exit~"<<endl;
             } 
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(choice !=6);
   return 0;
}
   
    
