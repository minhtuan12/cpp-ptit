#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
#define ll long long

pair<int, ll>temp[1000];
map<int, ll>res;
int n;

int check()
{
	int cnt = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (temp[i].first != temp[i + 1].first)
		{
			cnt++;
		}
	}
	if (cnt == n - 1)
	{
		return 0;
	}
	return 1;
}

bool func(pair<int,int> a, pair<int,int> b)
{
	if (a.first != b.first)
		return a.second < b.second;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> temp[i].first;
			res[temp[i].first]++;
			temp[i].second = i;
		}
		sort(temp, temp + n, func);
		if (!check())
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << temp[0].first << endl;
		}
	}
}