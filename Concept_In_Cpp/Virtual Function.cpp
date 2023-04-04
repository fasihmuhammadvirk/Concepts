#include<iostream>
using namespace std;

class universitypersonnel
{
    string personnel_name ;
    string personnel_fname;
    
public:
    virtual void getdata()=0;
    virtual void isoutstanding()=0;
    virtual void display()
    {
        cout <<"Name: "<<personnel_name;
        cout << endl;
        cout <<"Father Name: "<<personnel_fname;
        cout << endl;
    }; 
    void input()
    {
        cout <<"Enter the Name: ";
        cin >> personnel_name;
        cout<<"Enter Father Name: ";
        cin >>personnel_fname;
    } 
};
class Student :public universitypersonnel{
private:
   double student_gpa;
public:
    void getdata()
    {
        cout <<"Enter the data of the student";
        cout <<endl;
        universitypersonnel::input();
        cout <<"Enter the student gpa:";
        cin >>student_gpa ;
    }
    void isoutstanding()
    {
        if (student_gpa > 3.0 &&student_gpa <= 4.0)
        {
            cout <<"Student GPA is greater than 3\n";
            cout <<"His GPA is = "<<student_gpa<<endl;
        
        }
        else if (student_gpa<3.0 && student_gpa>0)
        {
            cout <<"Student GPA is less than 3\n";
            cout <<"His GPA is = "<<student_gpa<<endl;
        
        }
        else 
        {
            cout<<"Invalid Input\n";
        
        }
    
    }
    
    void display()
    {
        
       cout <<"Displaying the information of the student\n";
       universitypersonnel::display();
       cout <<"The GPA of the student is "<<student_gpa<<endl;
       isoutstanding();
    }    
    
};
class Instructor :public universitypersonnel{
private:
    int instructor_publication;
public:
   


 void getdata()
    {
        cout <<"Enter the instructor information\n";
        universitypersonnel::input();
        cout << "Enter the number of publication ";
        cin>>instructor_publication;
    
    }
    void isoutstanding()
    {
       if (instructor_publication > 50)
        {
            cout <<"Number of publication is grater than 50\n";
            cout <<"His publication is = "<<instructor_publication<<endl;
        
        }
        else if (instructor_publication>=0 && instructor_publication < 50)
        {
            cout <<"Number of publication is less than 50"<<endl;
            cout <<"His publication is  = "<<instructor_publication<<endl;
        
        }
        else 
        {
            cout <<"Invalid Input\n";
        }
    
    
    }
   
    void display()
    {
              cout << "Displaying the information of the Instructor\n";
              universitypersonnel::display();
              cout <<"His publication is "<<instructor_publication<<endl;
              isoutstanding();
   }
};


int main ()
{
    int choice;
    int n;
    char again;
    cout <<"How many information of student and instructor you wanted to add ->";
    cin >> n;
    universitypersonnel *stu[n],*ins[n];

    


for (int i = 0 ; i <n ; i++)
    {
      stu[i] = new Student;    
    }
    for (int k = 0 ; k<n ; k++)
    {
      ins[k] = new Instructor;    
    }
    do{ 
    cout << "Enter if you are a student or an instructor\n";
    cout << "Press 1 if you are a student\n"
            "Press 2 if you are a instructor\n"
            "Press 3 to Display Information\n";
    cout <<"->> ";cin >> choice;
    switch(choice)
    {
        case 1:
        {
            for (int s=0;s<n;s++)
            {   cout <<s+1<<" Student Information\n";
                stu[s]->getdata();
            }
            
            cout<<"\nShowing the information of the student"<<endl;
        for (int ss=0;ss<n;ss++)
            {
                cout<<"Displaying " <<ss+1<<" Student Information\n";
                stu[ss]->display();
            }
            
        break;}
        case 2:
        {
            
            for (int t =0;t<n;t++)
            {
            cout <<t+1<<" Instructor Information\n";
            ins[t]->getdata();
            }
             cout<<"\nShowing the information of the instructor"<<endl;
        for (int ii=0;ii<n;ii++)
            {
            cout<<"Displaying " <<ii+1<<" Instructor Information\n";
                ins[ii]->display();
            }
        break;}
        
        case 3:
        {
            int per;
            cout << "Press 1 if you wnat to display student data\n"
                    "Press 2 if you want to display instructor data\n";
            cin >>per;
            
            if (per == 1)
            {
            cout<<"Showing the information of the student"<<endl;
        for (int ss=0;ss<n;ss++)
            {
                cout<<"Displaying " <<ss+1<<" Student Information\n";
                stu[ss]->display();
            }
            }
            else if (per == 2)
            {
        cout<<"Showing the information of the instructor"<<endl;
        for (int ii=0;ii<n;ii++)
            {
            cout<<"Displaying " <<ii+1<<" Instructor Information\n";
                ins[ii]->display();
            }
            }
            else 
            {
                cout <<"No data to display"<<endl;
            }
        break;}
        default:
        {
        cout<<"Invalid Input"<<endl;
        break;
        }
    
    }
   
    cout <<"Do you want to enter again (Y/N): ";cin>>again;
    }while(again!= 'N');

}
