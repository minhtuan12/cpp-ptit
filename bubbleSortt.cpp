#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

vector<int>a;
vector<vector<int>>res;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		a.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int check;
		for (int i = 0; i < n - 1; i++)
		{
			check = 0;
			for (int j = 0; j < n - i - 1; j++)
			{
				if (a[j] > a[j + 1])
				{
					swap(a[j], a[j + 1]);
					check = 1;
				}
			}
			if (check != 1)
			{
				break;
			}
			res.push_back(a);
		}
		for (int i = res.size() - 1; i >= 0; i--)
		{
			cout << "Buoc " << i + 1 << ": ";
			for (auto k : res[i])
			{
				cout << k << " ";
			}
			cout << endl;
		}
		res.clear();
		a.clear();
		cout << endl;
	}
}