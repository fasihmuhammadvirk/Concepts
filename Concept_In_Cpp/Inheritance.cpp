#include <iostream>
using namespace std;

//polygon-rectangle-square-parallelogram-triangle hierarchy  


class Polygon 
{
public:
        virtual void getArea()=0;
        virtual void Display()=0;
};

class Rectangle: public Polygon
{
private:
int area_rectangle;
int length_rectangle;
int width_rectangle;
public:
    
    void getArea()
    {
    
        cout <<"Enter the  Length of the Rectangle: ";
        cin >> length_rectangle;
        cout <<"Enter the width of the Rectangle: ";
        cin>>width_rectangle;
    }
   
 void Display()
    {
        
     area_rectangle = (length_rectangle * width_rectangle);
        cout<<"The area of the Rectangle is " << area_rectangle;
    
    }
    
};







class Triangle: public Polygon 
{
private:
    int heigth_Triangle;
    int base_Triangle;
    double area_Triangle ; 
public:
    void getArea()
    {
       
        cout <<"Enter the  height of triangle: ";cin >> heigth_Triangle;
        cout << "Enter the base of triangle: ";cin>>base_Triangle;
        area_Triangle = (heigth_Triangle * base_Triangle)*(0.5);
        cout <<"The area is "<< area_Triangle;
        
    }
    void Display()
    {
    
     area_Triangle = (heigth_Triangle * base_Triangle)*(0.5);
     cout <<"The area of the triangle is "<< area_Triangle;
          
    }
};

class Square: public Polygon
{
private:
    int side_Square;
    double  square_Square;
public:
    
    void getArea()
    {
        
        cout << "Enter the  side of the square: "; cin >> side_Square;
        
    }
  
 void Display()
    {
    
        square_Square = (side_Square * side_Square);
        cout<<"The area of square is " << square_Square;
    
    }
};





class Parallelogram: public Polygon {
private:
    int base_Parallelogram;
    int height_Parallelogram;
    int area_Parallelogram;
public:
  




  void getArea(){
        
        cout <<"Enter the height of the parallelogram: ";cin >> height_Parallelogram;
        cout << "Enter the base of the parallelogram: ";cin>>base_Parallelogram;
       
    }
    void Display()
    {
     
     area_Parallelogram = (height_Parallelogram * base_Parallelogram);
     cout <<"The area is of the parallelogram: " << area_Parallelogram;
    
     
    }
    
};

int main() 
{
    int choose;
    char again;
    Polygon *shapes[4];
    shapes[0] = new Rectangle;
    shapes[1] = new Triangle;
    shapes[2] = new Square;
    shapes[3] = new Parallelogram;
  do{  
    cout <<"-> Choose Which Shape Area You Want to Find <-"<<endl;
    cout <<"Press 1 to find the area of Rectangle"<<endl;
    cout <<"Press 2 to find the area of Triangle"<<endl;
    cout <<"Press 3 to find the area of Square"<<endl;
    cout <<"Press 4 to find the area of Parallelogram"<<endl;
    cout <<"Press 5 to Display the Area's"<<endl;
    cout <<"->>"; cin >> choose;
  






  switch (choose)
    {
        case 1:
        {
         shapes[0]->getArea();
         shapes[0]->Display();
         cout << endl;
        }
        break;
        case 2:
        {
         shapes[1]->getArea();
         shapes[1]->Display();
         cout << endl;
        }
        break;
     


   case 3:
        {
         shapes[2]->getArea();
         shapes[2]->Display();
         cout<<endl;
        }
        break;
        case 4:
        {
         shapes[3]->getArea();
         shapes[3]->Display();
         cout << endl;
        }
        break;
        case 5:
        {
            shapes[0] ->Display();cout << endl;
            shapes[1] ->Display();cout << endl;
            shapes[2] ->Display();cout << endl;
            shapes[3] ->Display();cout << endl;
        }
        break;
    }
    cout <<"Do You want to Enter Again (y/n) -> ";cin >> again;
  }while(again != 'n');  
    
    
}

