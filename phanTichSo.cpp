#include <iostream>
using namespace std;

int n, a[15];

void in(int pos)
{
	cout << "(";
	for (int i = 1; i < pos; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[pos] << ") ";
}
void backTracking(int num, int pos, int sum) // number using
{
	for (int j = num; j >= 1; j--)
	{
		a[pos] = j;
		if (a[pos] == sum)
		{
			in(pos);
		}
		else if (j < sum)
		{
			backTracking(j, pos + 1, sum - j);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		backTracking(n, 1, n);
		cout << endl;
	}
}