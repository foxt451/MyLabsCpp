#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float x;
	cout << "Enter x: ";
	cin >> x;
	float y;
	if (x <= -1)
	{
		y = 1 / (pow(x, 2));
	}
	else if (x <= 2)
	{
		y = pow(x, 2);
	}
	else
	{
		y = 4;
	}
	cout << "f(x) = " << y << endl;
	system("pause");
}