#include <cstdio>
#include <string>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float side = 0;
	string input;
	while (true)
	{
		printf("Enter the side of an equilateral triangle: ");
		cin >> input;
		try
		{
			side = stof(input);
			if (side <= 0)
			{
				printf("Your input must be a positive number!\n");
			}
			else
			{
				break;
			}
		}
		catch (const invalid_argument&)
		{
			printf("Your input must be a number!\n");
		}
	}
	float area = sqrt(3) * pow(side, 2) / 4;
	printf( "The area of the triangle: %.2f\n", area);
	system("pause");
	return 0;
}