#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <malloc.h>
using namespace std;

int main()
{
    srand(time(0));
    int a, b, n, m;
    
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
    
    cout << "Your 1-st array is: " << endl;
    int ** arrayN = new int*[n];
    for (int i = 0; i < n; i++) {
        arrayN[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            arrayN[i][j] = rand() % (b - a) + a;
            cout << arrayN[i][j] << " ";
        }  
        cout << endl;
    }
    cout << endl;
    
    /* 2-nd array */
    
    cout << "Your 2-nd array is: " << endl;
    int** arrayM = new int* [n];
    for (int i = 0; i < n; i++) {
        arrayM[i] = new int[m];
        for (int j = 0; j < m; j++) {
            arrayM[i][j] = rand() % (b - a) + a;
            cout << arrayM[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Your final array after adding its elements is: " << endl;
    int** arrayMN = new int* [n];
    for (int i = 0; i < n; i++) {
        arrayMN[i] = new int[m];
        for (int j = 0; j < m; j++) {
            arrayMN[i][j] = arrayN[i][j] + arrayM[i][j];
            cout << arrayMN[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    
    system("pause");
}
