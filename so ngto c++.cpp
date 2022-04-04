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
	int m, n;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> m >> n;
		for (int i = m; i <= n; i++)
		{
			if (prime(i) == 1)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
	}
}
