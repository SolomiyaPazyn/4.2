#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Функція для обчислення котангенса
double ctg(double x) {
	return 1.0 / tan(x);

	int main()
	{
		double x, xp, xk, dx, A, B, y;
		cout << "xp = "; cin >> xp;
		cout << "xk = "; cin >> xk;
		cout << "dx = "; cin >> dx;
		cout << fixed;
		cout << "---------------------------" << endl;
		cout << "|" << setw(5) << "x" << " |"
			<< setw(7) << "y" << " |" << endl;
		cout << "---------------------------" << endl;
		x = xp;
		while (x <= xk)
		{
			A = 8.1 + pow(x, 3);
			if (x < -3.5)
				B = 1 - pow(x, -5);
			else
				if (x > 1)
					B = atan(2 * x) - log10(x / 2);
				else
					B = ctg(fabs(x + 1));
			y = A + B;
			cout << "|" << setw(7) << setprecision(2) << x
				<< " |" << setw(10) << setprecision(3) << y
				<< " |" << endl;
			x += dx;
		}
		cout << "---------------------------" << endl;
		return 0;
	}

