#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int a, b, n, m, sum;
    cout << "Type a size of an array ( n => columns and m => rows )"<< endl;
    cin >> n >> m;
    cout << "Type limits of an array ( a and b, NOTE: =>  a < b  <= ) " << endl;
    cin >> a >> b;
    if (a > b || a == b)
    {
        cout << "Your limits of an array must be less than b. Try again, please." <<endl;
        system("pause");
        return 0;
    }
/* 1-st array */
    cout << "Your initial two-dimensional array: " << endl;
    int ** arr = new int*[n];
    for (int i = 0; i < n; i++) 
        {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % (b - a) + a;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;  
/*Final result*/    
    cout << "Final result of one-dimensional array with " <<m<< " dimension:" << endl;
    for (int j = 0; j < m; j++)
    {
    sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i][j];    
        } 
    cout<< sum << endl;
    }
  system("PAUSE");
}  
   

