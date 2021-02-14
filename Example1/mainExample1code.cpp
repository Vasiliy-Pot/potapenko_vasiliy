// EXAMPLE 1

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    const char TAB = '\t';
     int a, b;
     
       b = 10;
       
       a = b++;
       
     cout << "a = " << a << TAB << "b = " << b << endl;
     
       b = 10;
       
       a = ++b;
       
     cout << "a = " << a << TAB << "b = " << b << endl;
     
  getch();
 return 0;
}

