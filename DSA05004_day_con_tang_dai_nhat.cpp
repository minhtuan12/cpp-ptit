#include <iostream>
using namespace std;

int max_len[1000], res = 0;

int solve(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		max_len[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i])
			{
				max_len[i] = max(max_len[i], max_len[j] + 1);
			}
		}
		res = max(res, max_len[i]);
	}
	return res;
}

int main()
{
	int n, a[1000];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << solve(a, n);
}