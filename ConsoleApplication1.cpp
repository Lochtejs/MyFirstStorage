#include <iostream>
#include <cmath>
using namespace std;
float f(float a)
{
	return 1 / ((a) * (a));
}
int main()
{
	float n, summary = 0.0;
	for (n = 1.0; n <= 1000; n++)
	{
		for (float i = 1.0; i <= n; i++)
		{
			summary += f(i);
		}
		cout << sqrt(summary * 6) << endl;
		summary = 0;
	}

	return 0;
}