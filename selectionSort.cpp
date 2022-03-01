#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

vector<int>a;
vector<vector<int>>res;

int main()
{
	int n;
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[minIndex])
			{
				minIndex = j;
			}
		}
		swap(a[minIndex], a[i]);
		res.push_back(a);
	}
	for (int i = res.size() - 1; i >= 0; i--)
	{
		cout << "Buoc " << i + 1 << ": ";
		for (auto j : res[i])
		{
			cout << j << " ";
		}
		cout << endl;
	}
}