#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n, m, p;
		cin >> n >> m >> p;
		ll a[1000000], b[1000000], c[1000000];
		vector<ll>res;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		for (int i = 0; i < p; i++)
		{
			cin >> c[i];
		}
		int i = 0, j = 0, k = 0;
		while (i < n && j < m && k < p)
		{
			if (a[i] == b[j] && b[j] == c[k])
			{
				res.push_back(a[i]);
				i++;
				j++;
				k++;
			}
			else if (a[i] <= b[j] && a[i] <= c[k])
			{
				i++;
			}
			else if (b[j] <= c[k] && b[j] <= a[i])
			{
				j++;
			}
			else
			{
				k++;
			}
		}
		if (!res.empty())
		{
			for (auto i = res.begin(); i != res.end(); i++)
			{
				cout << *i << " ";
			}
			cout << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
}