#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int n, x;

bool func(pair<int,int> a, pair<int,int> b)
{
	if (abs(a.first - x) != abs(b.first - x))
	{
		return abs(a.first - x) < abs(b.first - x);
	}
	return a.second < b.second;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		cin >> n >> x;
		pair<int, int>temp[100000];
		for (int i = 0; i < n; i++)
		{
			cin >> temp[i].first;
			temp[i].second = i;
		}
		sort(temp, temp + n, func);
		for (int i = 0; i < n; i++)
		{
			cout << temp[i].first << " ";
		}
		cout << endl;
	}
}