#include <cstring>
#include <iostream>
#include <string>
  
using namespace std;
  

class CompareString {
  
public:
  
   string  actual_string;
  
    
    CompareString(string str1)
    {
    
       actual_string = str1;
    }
  
   
    int operator==(CompareString s2)
    {
        if (actual_string.size()== s2.actual_string.size())
            return 1;
        else
            return 0;
    }
  
    
    int operator<=(CompareString s3)
    {
        if (actual_string.size() <= s3.actual_string.size())
            return 1;
        else
            return 0;
    }
  
    
    int operator>=(CompareString s3)
    {
        if (actual_string.size() >= s3.actual_string.size())
            return 1;
        else
            return 0;
    }
};
  
void compare_size(CompareString s1, CompareString s2)
{
  
    if (s1 == s2)
        cout << s1.actual_string << " is equal to "
             << s2.actual_string << endl;
    else {
        cout << s1.actual_string << " is not equal to "
             << s2.actual_string << endl;
        if (s1 >= s2)
            cout << s1.actual_string << " is greater than "
                 << s2.actual_string << endl;
        else
            cout << s2.actual_string << " is greater than "
                 << s1.actual_string << endl;
    }
}
  

void string1 (string a , string b )
{
    
    string str1 = a;
    string str2 = b;
  
    
    CompareString s1(str1);
    CompareString s2(str2);
  
    cout << "Comparing \"" << s1.actual_string << "\" and \""
         << s2.actual_string << "\"" << endl;
  
    compare_size(s1, s2);
}
  

void string2 (string x , string y)
{
  
    string str1 = x;
    string str2 = y;
  
    
    CompareString s1(str1);
    CompareString s2(str2);
  
    cout << "\n\nComparing \"" << s1.actual_string << "\" and \""
         << s2.actual_string << "\"" << endl;
  
    compare_size(s1, s2);
}
  

int main()
{
    
   
    string name1="Fasih",name2="Muhammad";
    cout <<"When we gave the same size of string to the function"<<endl;
    string1(name1,name1);
    cout << endl;
    cout << "when we gave the different size of string to the function"<<endl;
    string2(name1,name2);
    cout <<"\n~END~"<<endl;
    return 0;
}

