#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

void print(int a[], const int n) 
{
    for (int i = 0; i < n - 1; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}
int t1(int a[], const int n) {
    int sum = 0;
    for (int i = 0; i < n-1; i++){
        if (a[i] % 2 != 0){
            sum += a[i];
        }
    }
    return sum;
}
int t2(int a[], const int n) {
    int sum = 0, min, max;
    for (int i = 0; i < n-1; i++){
        if (a[i]<0){
            min = i;
            break;
        }
    }
    for (int i = 0; i < n-1; i++){
        if (a[i] < 0) max = i;
    }
    for (int i = min+1; i < max; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    const int n = 10;
    int a, b;
    srand(time(0));

    cout << "Input limits of arrays(a and b, a<b):" << endl;
    cin >> a >> b;

    int array[n];
    for (int i = 0; i < n - 1; i++){
        array[i] = rand() % (b - a) + a;
    }

    cout << "Your initial array is:" << endl;
    print(array, n);

    cout << "Sum of unpaired elements of array is: " 
         << t1(array, n) << endl;
    cout << "the sum of the elements of the array located between the first and last negative elements is: "
        << t2(array, n) << endl;
        system("PAUSE");
}
