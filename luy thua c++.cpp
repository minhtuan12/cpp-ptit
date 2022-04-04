#include <iostream>
using namespace std;

int main()
{
	long x, y;
	long long p;
	long k = 1;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> x >> y >> p;
		for (int i = 0; i < y; i++)
		{
			k = x * k;
		}
		cout << k % p << endl;
	}
}
