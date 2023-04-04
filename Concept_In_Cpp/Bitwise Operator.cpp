
//Write a C++ program that takes an integer from user and check whether the number is even or odd using bitwise operators.
#include <iostream>
using namespace std;

void Check()
{
    int n;
    cout<<"Enter a Number to Check if it is even or not :";cin>>n;

    if((n|1)>n)
    {
        cout << "The Number "<<n<<" is Even";
        cout<<endl;
    }
    else
    {
        cout << "The Number "<<n<<" is Odd";
        cout<<endl;
    }

}
int main () {
int choice;
    do{
    Check();
    cout<<"Do you want to Enter Another Number\n"
          "Press 1 to Enter Again\n"
          "Pres 2 to Exit\n";cin>>choice;

}while(choice != 2);


}

//Write a C++ program that takes an integer from user and check whether the number is power of 2 or notusing bitwise operators.


#include<iostream>
using namespace std;
void Check(int num)
{

    // use of bitwise AND (&) operator
    if((num& (num-1))==0)
        cout<<"Number "<< num << " is the power of 2"<<endl;
    else
        cout<<"Number "<< num << " is not the power of 2"<<endl;

}
int main()
{
    int num;
    int choice;
    do {
        cout << "Enter a Number to check weather if it is a power of 2 or not:";cin>>num;
        Check(num);
        cout << endl;
        cout<<"Do you want to Enter Another Number\n"
              "Press 1 to Enter Again\n"
              "Pres 2 to Exit\n";cin>>choice;

    }while(choice != 2);



    return 0;
}


// Write a C++ program that takes an integer from user and check whether the number is multiple of 4 or not using bitwise operators.


#include <iostream>
using namespace std;
void check(int num)
{
    if ((num & 3) == 0)
    {
        cout <<"The Number "<< num << " is a Multiple of 4";
        cout << endl;
    }
    else
    {
        cout <<"The Number "<< num << " is not a Multiple of 4";
        cout << endl;
    }

}
int main()
{
    int num ;
    int choice;
    do{
        cout <<"Enter a Number to Check if it a multiple of 4 or not:\n";
        cin>>num;
        check(num);
        cout<<"Do you want to Enter Another Number\n"
              "Press 1 to Enter Again\n"
              "Pres 2 to Exit\n";cin>>choice;

    }while(choice != 2);



}

// Write a C++ program that takes an integer from user and check whether the number is divisbleby9or not using bitwise operators.


#include <iostream>
using namespace std;

bool check(int n)
{
    if (n == 0 || n == 9)
        return true;
    else  if (n < 9)
        return false;
    return check((int)(n >> 3) - (int)(n & 7));

}

int main()
{
    int n ;
    int choice;
    do{
        cout << "Enter a number weather if it is divisible by 9 or not: ";cin >>n;

        if (check(n))
        {
            cout<<"The Number "<< n <<" is divisible by 9";
            cout<<endl;
        }
        else
        {
            cout<<"The Number "<<n<<" is not divisible by 9";
            cout<<endl;

        }
        cout<<"Do you want to Enter Another Number\n"
              "Press 1 to Enter Again\n"
              "Pres 2 to Exit\n";cin>>choice;

    }while(choice != 2);


}



