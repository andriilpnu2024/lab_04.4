#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x; 
	double R; 
	double y; 
	double xp;
	double xk;
	double dx;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
while(x<=xk)
{
	if (x <= -6)
		y = R;
	else
		if (-6 < x && x <= -R)
			y = (x + 6) / (6 - R) - 1;
		else
			if (-R < x && x <= 0)
				y = -sqrt(pow(R, 2) - pow((x + R), 2)) + R;
			else
				if (0 < x && x <= R)
					y = sqrt(pow(R, 2) - pow(x, 2));
				else
					y = R - x;
	cout << "|" << setw(7) << setprecision(2) << x
		<< " |" << setw(10) << setprecision(3) << y 
		<< " |" << endl;
	x += dx;
}
cout << "---------------------------" << endl;
	return 0;
}
