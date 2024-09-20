#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y, ctg;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;
	ctg = cos((x + 4) / sqrt(11)) / sin((x + 4) / sqrt(11));
	
	while (x <= xk)
	{
		A = 1.0 / abs(x + 2) + 1;
		if (x < 1)
			B = -7 * (x * x) + x - 8;
		else
			if (x > 4)
				B = -sqrt(1 + abs(cos(x) * cos(x) * cos(x)));
			else
				B = -ctg + 3;
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
