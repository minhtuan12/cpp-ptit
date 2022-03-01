#include <iostream>
#include <set>
using namespace std;

int ok = 0, C[1000], temp[40];
int n, k, res = 0;
void in()
{
	for (int i = 1; i <= k; i++)
	{
		cout << C[i] << " ";
	}
	cout << endl;
}

void sinh(int C[])
{
	int i = k;
	while (C[i] == n - k + i)
	{
		i--;
	}
	if (i == 0)
	{
		ok = 1;
	}
	else
	{
		C[i]++;
		for (int j = i + 1; j <= k; j++)
		{
			C[j] = C[j - 1] + 1;
		}
	}
}

int main()
{
	// nhap
	/*int test;
	cin >> test;
	while (test--)*/
	{
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
		{
			cin >> C[i];
		}
		sinh(C);
		in();
		/*if (ok == 1)
			cout << k << endl;
		else
			cout << cnt(C, temp, k) << endl;
			*/
	}
}