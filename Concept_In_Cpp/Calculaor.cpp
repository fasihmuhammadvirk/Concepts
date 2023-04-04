#include <iostream>
#include <conio.h>
using namespace std;

class operation {
public:
    
    double Addition(double x, double y) {
        double answer = x + y;
        return answer;
    }
    

double Subtraction(double  x, double y) {
        double answer = x - y;
        return answer;
    }
    double Multiplication(double  x, double y) {
        double answer = x * y;
        return answer;
    }
    

double Division(double x, double y) {
        double answer = x / y;
        return answer;
    }
};

int main()
{
    char ope;
    int x, y;
    operation maths;
    char again;

    cout << "WELCOME TO MY CALCULATOR " << endl;
    cout << "WHAT MATHEMATICAL OPERATION YOU WANT TO PERFORM" << endl;
    cout << "ENTER THE INPUT FOR DESIRE OPERATION" << endl;
    do
    {
        cout << "A - Addition " << endl;
        cout << "S - Subtraction " << endl;
        cout << "M - Multiplication " << endl;
        cout << "D - Division " << endl;
        cout << "ENTER HERE : "; cout << " -> "; cin >> ope;
        cout << endl;

        switch (ope) {



        case 'A':
            cout << "YOU SELECT ADDITION" << endl;
            cout << "PLEASE ENTER THE FIRST VALUE: " << endl;
            cout << "->"; cin >> x;
            cout << "PLEASE ENTER THE SECIND VALUE: " << endl;
            cout << "->"; cin >> y;
            cout << x << " + " << y << " = ";
            cout << maths.Addition(x, y);
            cout << endl;
            break;
        

case 'S':
            cout << "YOU SELECT SUBTRACTION" << endl;
            cout << "PLEASE ENTER THE FIRST VALUE: " << endl;
            cout << "->"; cin >> x;
            cout << "PLEASE ETER THE SECOND VALUE: " << endl;
            cout << "->"; cin >> y;
            cout << x << " - " << y << " = ";
            cout << maths.Subtraction(x, y);
            cout << endl;
            break;
        

case 'M':
            cout << "YOU SELECT MULTIPLICATION" << endl;
            cout << "PLEASE ENTER THE FIRST VALUE: " << endl;
            cout << "->"; cin >> x;
            cout << "PLEASE ENTER THE SECOND VALUE:" << endl;
            cout << "->"; cin >> y;
            cout << x << " x " << y << " = ";
            cout << maths.Multiplication(x, y);
            cout << endl;
            break;
        case 'D':
            cout << "YOU SELECT DIVISION" << endl;
            cout << "PLEASE ENTER THE FIRST VALUE: " << endl;
            cout << "->"; cin >> x;
            cout << "PLEASE ENTER THE SECOND VALUE: " << endl;
            cout << "->"; cin >> y;
            cout << x << " / " << y << " = ";
            cout << maths.Division(x, y);
            cout << endl;
            break;
        default:
            cout << "YOU HAVE ENTERED THE WRONG INPUT" << endl;
            cout << "Invalid Input...";
            cout << endl;
            break;
        }
        cout << "Do you want to perform another Operation (y/n) : ->> "; cin >> again;
    } while (again != 'n');
    cout << "Exit" << endl;
}
