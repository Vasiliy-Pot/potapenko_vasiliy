#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	float result;
	int switch_on;

	cout << "Input variable: " << endl;
	cin >> switch_on;

	switch (switch_on){
		case 1:{
			double a = 0.8f, b = 0.8f, x = 0.1,z;

			while (x <= 1) {
				z = exp(x);

				if (x < pow(a,3))
				{
					result = a * pow(sin(x), 2.5) + b * cos(z * x + a);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((pow(a,3)<= x) && (x <= b))
				{
					result = pow((a + b * x), 2) - sin(a + z * x);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > b)
				{
					result = sqrt(abs(sin(a + b * x + z) - x));
					cout << "X: " << x << " If Number: 3, and result: " << result << endl;
				}
				x += 0.1;
			}

			cout << "Completed" << endl;
			break;
		}
		case 2: {
			double a = 1.2, b = 2.3, z, x = 1;

			do{
				z = exp(2 * x);

				if (x < pow(a, 3))
				{
					result = a * pow(sin(x), 2.5) + b * cos(z * x + a);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((pow(a, 3) <= x) && (x <= b))
				{
					result = pow((a + b * x), 2) - sin(a + z * x);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > b)
				{
					result = sqrt(abs(sin(a + b * x + z) - x));
					cout << "X: " << x << " If Number: 3, and result: " << result << endl;
				}
				x += 0.2;
			} while (x <= 3);

			cout << "Completed" << endl;
			break;
		}
		case 3: {
			double a = 1.9, b = 9.2, z, x;

			for (x = 6.4; x <= 10; x += 0.4) {
				z = exp(3);
				if (x < pow(a, 3))
				{
					result = a * pow(sin(x), 2.5) + b * cos(z * x + a);
					cout << "X: " << x << " If Number: 1, and result: " << result << endl;
				}
				else if ((pow(a, 3) <= x) && (x <= b))
				{
					result = pow((a + b * x), 2) - sin(a + z * x);
					cout << "X: " << x << " If Number: 2, and result: " << result << endl;
				}
				else if (x > b)
				{
					result = sqrt(abs(sin(a + b * x + z) - x));
					cout << "X: " << x << " If Number: 3, and result: " << result << endl;
				}
			}

			cout << "Completed" << endl;
			break;
		}
		default:
			cout << "You typed not suppoerted variables";
			break;
	}
	system("PAUSE");
	return 0;
}
