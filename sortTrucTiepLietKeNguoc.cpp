#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int n;
vector<int>a;
vector<vector<int>>res;
// arr[n] = 1 4 3 2 5 
// res[0] = 1 2 3 4 5

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		a.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < a[i])
				{
					swap(a[i], a[j]);
				}
			}
			res.push_back(a);
		}
		for (int i = res.size() - 1; i >= 0; i--)
		{
			cout << "Buoc " << i + 1 << ": ";
			for (auto x : res[i])
			{
				cout << x << " ";
			}
			cout << endl;
		}
		res.clear();
		a.clear();
	}
}