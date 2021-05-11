#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    const int N = 11;
    const int M = 11;
    int a, b, n, m, sum;
    cout << "Type a size of an array ( n => columns and m => rows )"<< endl;
    cout << "NOTE: n and m must be less than " << N << endl;
    cin >> n >> m;
    if (n >= N || m >= M)
    {
        cout << "Some of your values is greater or equal to 11. Try again, please."<<endl;
        system("pause");
        return 0;
    }
    cout << "Type a limit of an array ( a and b, NOTE: =>  a < b  <= ) " << endl;
    cin >> a >> b;
    if (a > b || a == b)
    {
        cout << "Your limits of an array must be less than b. Try again, please." <<endl;
        system("pause");
        return 0;
    }
    /* 1-st array */
    cout << "Your initial two-dimensional array: " << endl;
    int arr[N][M];
    for (int i = 0; i < n; i++) {
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
   
