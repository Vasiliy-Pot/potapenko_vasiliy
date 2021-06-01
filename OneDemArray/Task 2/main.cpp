#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;


void initial_arr(int a[], const int n)
{
      for (int i = 0; i < n; i++)
      {
          cout << a[i] << "  ";
      }
      cout << endl;
}

int task1 (int a[], const int n) //minimum element of the array
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
                min = a[i];
        }
    }
    cout<<min<<endl;
}

int main()
{
    const int n = 10;
    int a,b;
    srand(time(0));
    
    cout<< "Input limits of arrays a and b ( a < b )"<<endl;
    cin>> a >> b;
    
    
    int array[n];
    for (int i = 0; i < n - 1; i++)
    {
        array[i]= rand() % (b - a) + a;    
    }
    cout<<""<<endl;
    cout<<"Your initial arrays is:"<<endl;
    initial_arr(array,n);
    cout<<""<<endl;
    cout<<"The minimum element of an array :"<<endl;
    task1(array, n);
    
    system("PAUSE");
}
