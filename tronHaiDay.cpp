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
		ll a[1000], b[100];
		vector<int>temp;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			temp.push_back(a[i]);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
			temp.push_back(b[i]);
		}
		sort(temp.begin(), temp.end());
		for (auto i = temp.begin(); i != temp.end(); i++)
		{
			cout << *i << " ";
		}
		cout << endl;
	}
}