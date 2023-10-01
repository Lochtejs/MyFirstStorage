#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

float f(float a)
{
	return 1 / ((a) * (a));
}

int main()
{
	float n, summary = 0.0;

	ofstream foo("dots.csv", ios::out);

	for (n = 1.0; n <= 1000; n++)
	{
		for (float i = 1.0; i <= n; i++)
		{
			summary += f(i);
		}

		foo << sqrt(summary * 6);
		foo << " ";
		foo << n << endl;
		summary = 0;
	}

	return 0;
}
