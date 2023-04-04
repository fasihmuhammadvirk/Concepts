#include<iostream>
using namespace std;


template <typename I,typename F>
class matrix{
   I row, col ;
   F matrix1[100][100];
   F matrix2[100][100];
   F Add [100][100]; 
   F sub[100][100];
   public:
       
void getdata()
{

    cout <<"Maxmium Number for row and column are"<<endl;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of column: ";
    cin>>col;
   
  
}    

void matrix_1()
{
 cout << "Enter Values of the First Array Matrix-> \n";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>matrix1[i][j];
     }
   }
}
void matrix_2()
{
 cout << "Enter Values of Second Array Matrix-> \n ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>matrix2[i][j];
     }
   }

}
   
void Addition()
{
    cout<<"performing Addition\n";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        Add[i][j]=matrix1[i][j]+matrix2[i][j];
        
      }
   }
}

void Subtraction()
{
cout<<"Performing Subtraction\n";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sub[i][j]=matrix1[i][j]- matrix2[i][j];
        }
   }
}
void Display()
{
cout<<"Output of Addition: ";    
for (int i = 0;i<row;i++ ) {
        cout<<endl;
      for (int j = 0;j<col;j++ ) {
        cout<<Add[i][j]<<" ";
      }
   }
cout <<endl;
cout<<"Output of Subtraction: ";
   for (int i = 0;i<row;i++ ) {
       cout<<endl;
      for (int j = 0;j<col;j++ ) {
         cout<<sub[i][j];
      }
   }


}

};




int main ()
{
    matrix <int,int>M;
    matrix <int,float>M1;
     int choice;
    
    cout <<"Choose in which data type you want to Enter the Data for Matrix\n"
           "Press 1 for Integer Type\n"
           "Press 2 for Float Type"<<endl;
    cout<<"-> ";cin >> choice;
 if (choice == 1){  
    M.getdata();
    M.matrix_1();
    M.matrix_2();
    M.Addition();
    M.Subtraction();
    M.Display();
 }
 else if (choice == 2)
 {
    M1.getdata();
    M1.matrix_1();
    M1.matrix_2();
    M1.Addition();
    M1.Subtraction();
    M1.Display();
 }
 else 
 {
     cout <<"Wrong Input"<<endl;
 }

}
