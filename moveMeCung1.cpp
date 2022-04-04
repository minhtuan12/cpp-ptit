#include <iostream>
#include <string>
using namespace std;

int a[15][15], n, ok;
char res[30];

void in(int k)
{
	for (int i = 1; i <= k; i++)
	{
		cout << res[i];
	}
	cout << " ";
}

void backTracking(int i, int j, int idx)
{
	if (i == n && j == n)
	{
		in(idx);
		return;
	}
	if (i < n && a[i + 1][j] == 1)
	{
		res[idx] = 'D';
		backTracking(i + 1, j, idx + 1);
	}
	if (j < n && a[i][j + 1] == 1)
	{
		res[idx] = 'R';
		backTracking(i, j + 1, idx + 1);
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}
		if (a[1][1] == 0 || a[n][n] == 0)
		{
			cout << -1 << endl;
		}
		else
		{
			backTracking(1, 1, 1);
		}
		cout << endl;
	}
}