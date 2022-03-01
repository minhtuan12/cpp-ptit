#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n, m;
		cin >> n >> m;
		ll a[1000000], b[1000000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + m);
		cout << a[n - 1] * b[0] << endl;
	}
}