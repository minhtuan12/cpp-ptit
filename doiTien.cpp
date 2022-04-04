#include <iostream>
using namespace std;

int n, S, a[30];
int res = 1e9;

void backTracking(int i, int sum, int x) // so to tien x
{
	if (sum > S || x > res)
	{
		return;
	}
	if (i == n)
	{
		if (sum == S)
		{
			res = min(res, x);
		}
		return;
	}
	backTracking(i + 1, sum, x);			//th1: k lay to tiep theo
	backTracking(i + 1, sum + a[i], x + 1); //th2: lay to tiep theo
}
int main()
{
	cin >> n >> S;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	backTracking(0, 0, 0);
	if (res == 1e9)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << res;
	}
}