#include <iostream>
using namespace std;

int n, k, C[1000];

void in()
{
	for (int i = 1; i <= k; i++)
	{
		cout << C[i] << " ";
	}
	cout << endl;
}

void sinh()
{
	int i = k;
	while (C[i] - C[i - 1] == 1 && i >= 1)
	{
		i--;
	}
	if (i == 1)
	{
		for (int j = 1; j <= k; j++)
		{
			C[j] = n - k + j;
		}
		in();
	}
	else
	{
		C[i]--;
		for (int j = i + 1; j <= k; j++)
		{
			C[j] = n - k + j;
		}
		in();
	}
}
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		cin >> n >> k;
		C[0] = 0;
		for (int i = 1; i <= k; i++)
		{
			cin >> C[i];
		}
		sinh();
	}
}