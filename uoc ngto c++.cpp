#include <iostream>
#include <math.h>
using namespace std;

int prime(int a)
{
	if (a < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a, t;
	cin >> t;
	
	while (t--)
	{
		cin >> a;
		if (prime(a) == 1)
		{
			cout << a << endl;
		}
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0 && prime(i) == 1)
			{
				cout << i << " ";
				a = a / i;
			}
		}
	}
}
