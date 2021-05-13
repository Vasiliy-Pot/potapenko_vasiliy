#include <cstdlib>
#include <ctime>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
    int a,b,n,m,s;
    float result, sum, lim;
    cout<<"Input n => rows and m => columns of an matrix."<<endl;
    cout<<"NOTE: 'n' can not be negative numbers and also can not be zero"<<endl; 
    cin>>n>>m;
    if (n <= 0 || m <= 0)
       {
           cout << "'n' can not be negative numbers and also can not be zero. Try again. " <<endl;
           system("PAUSE");
           return 0;
       }
    cout<<"Input limits of an matrix (NOTE: a < b)"<<endl; 
    cin>>a>>b;
    if (a > b || a == b)
       {
           cout << " 'a' must be less than 'b'. Try again. " <<endl;
           system("PAUSE");
           return 0;
       }
    //Matrix
    cout<< " Your matrix has " << n << " rows and " << m << " columns: "<< endl; 
    cout<< " "<<endl;
    int ** mat = new int*[n];
    for (int i = 0; i < n; i++) 
    {
        mat[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            mat[i][j] = rand() % (b - a) + a;
            cout << mat[i][j] << " ";
            cout<<"";
        }
        cout << endl;
    }
    cout << endl;  
    //Find the arithmetic mean of the matrix elements.
    s = n*m;
    for (int i=0;i<n;i++)
    {
        sum=0;
        result=0;
        for (int j=0;j<m;j++)
            {
             sum=sum+mat[i][j];
            }
        result = sum / s;
        cout<<"The arithmetic mean of the "<<i+1<<" row is "<<result<<endl;
        cout<<""<<endl;
    }
    cout<<""<<endl;

    
    system("PAUSE");
}

