#include <iostream>
using namespace std;
int main ()
{
float r, h, v;
float pi = 3.14159;
cout << "Input cone's radius." <<endl;
cin >> r;
cout << "Input cone's height." <<endl;
cin >>  h;
 v = (1.0/3.0)*pi*(r*r)*h;
cout << "The volume of the cone is\n " << v << "\n" << endl;
system ("PAUSE");
return 0;
}
