#include <iostream>  
using namespace std;  
int main()  
{  
int a, b=0, c;    
cout<<"Enter your 4-digit number: ";    
cin>>a;    
  while(a!=0)    
  {    
     c=a%10;      
     b=b*10+c;    
     a/=10;    
  }    
 cout<<"Reversed Number: "<<b<<endl;     
 system("PAUSE"); 
return 0;  
}  

