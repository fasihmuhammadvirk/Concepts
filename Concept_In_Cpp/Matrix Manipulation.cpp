
//Task 1 OOP LAB 6

#include <iostream>
using namespace std;
const int  array_size = 3;

class matrix_manipulation
{
    int matrix_array[array_size];
    static int static_variable ;
public:
    
    
    matrix_manipulation ()
    {
          for (int i =0 ;i<array_size;i++)
    {
       matrix_array[i]=i+1;
    
    }
    
    
    }
    matrix_manipulation(int val1,int val2,int val3)
    {
    
        cout << "Constructor Called"<<endl;
        matrix_array[0]= val1;
        matrix_array[1]= val2;
        matrix_array[2]= val3;
       
  
        
    }
    friend void inatilize (matrix_manipulation);

};
int matrix_manipulation ::static_variable=3;
void inatilize(matrix_manipulation obj)
{
    cout <<"Matrix Value"<<endl;
    for (int i=0;i< array_size ;i++)
    {
    
        cout << obj.matrix_array[i]<<"  ";
    
    }

    cout <<endl<<"Matrix Manipulation with static variable ";
    cout <<matrix_manipulation::static_variable;
    cout << endl;
    for (int i=0;i<array_size ;i++)
    {
    
        cout <<matrix_manipulation::static_variable* obj.matrix_array[i]<<"  ";
    
    }
}



int main ()
{
    matrix_manipulation obj(50,30,10);
    inatilize(obj);
}

