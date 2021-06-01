#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

void ArrA (vector<int> a, int k) 
{   
    cout<<""<<endl;
    int vec_s = a.size();
    for (int i = 0, j = 0; i < vec_s; i++, j++)
    {
        if (j == k)
        {
              cout << endl;
              j = 0;
        }   
        cout << a[i] << " ";
    }
    cout << endl << endl;
}

void ArrB (vector<double> a, int k) 
{   
    cout<<""<<endl;
    int vec_s = a.size();
    for (int i = 0, j = 0; i < vec_s; i++, j++)
    {
        if (j == k)
        {
              cout << endl;
              j = 0;
        }  
        cout << fixed << showpoint;
        cout << setprecision(1); //to the nearest tenth
        cout << a[i] << " "; 
    }
    cout << endl << endl;
}    

double random (double min, double max)
{
       return (double) (rand()) / RAND_MAX * (max - min) + min;
}

int main()
{
    double k,n,m,tmp;
    srand(time(0));
    
    cout<<"Input numbers m,n and k"<<endl;
    cout<<"m is for the A array "<<endl;
    cin>>m;
    cout<<"n is for the B array "<<endl;
    cin>>n;
    cout<<"k is the length of a raw in console"<<endl;
    cin>>k;
    cout<<""<<endl;
    
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        a[i] = rand()%500 + 125;
    }
    vector<double> b(n);
    
    for (int i = 0; i < n; i++)
    {
        b[i] = random(10,15);
    }
    cout<< "Array A, initial form :"<<endl;
    ArrA(a, k);
    cout<<""<<endl;
    cout<<""<<endl;
    cout<< "Array B, initial form :"<<endl;
    ArrB(b, k);
    
    for (int i = 0; i < a.size()-1; i++)
    {
        for (int j = 0; j <= a.size() -2 -i; j++)
        {
            if (a[j] > a[j + 1])
            {
                     tmp = a[j];
                     a[j] = a[j + 1];
                     a[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < b.size()-1; i++)
    {
        for (int j = 0; j <= b.size() -2 - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                     tmp = b[j];
                     b[j] = b[j + 1];
                     b[j + 1] = tmp;
            }
        }
    }
    cout<<"**"<<endl;
    cout << "Array A, sorted form :" << endl;
    ArrA(a,k);
    cout << "Array B, sorted form :" << endl;
    ArrB(b,k);
    system("PAUSE");
}
