#include <iostream>
using namespace std;

int main() 
{
	int x, y,  z;
	cout << "Convert the time interval's value"  << endl;
	cout << "Input minutes: "  << endl;
	cin >> z;
	y = z % 60;
	x = z / 60;
	cout << z << " minutes is "<< x << " hours and "<< y << " minutes " << endl;
	system ("PAUSE");
	return z;
}

