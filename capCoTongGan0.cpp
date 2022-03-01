#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

bool func(pair<int, int>a, pair<int, int>b)
{
	if (a.first != b.first)
		return abs(a.first) < abs(b.first);
	return a.second < b.second;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n;
		cin >> n;
		int arr[1000];
		vector<pair<int, int>> temp(1000);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			temp[i].first = arr[i];
			temp[i].second = i;
		}
		sort(temp.begin(), temp.end(), func);
		ll res, Min = INT_MAX, idx;
		for (int i = 0; i < n - 1; i++)
		{
			int temp_sum = abs(temp[i].first) + abs(temp[i + 1].first);
			if (temp_sum < Min)
			{
				Min = temp_sum;
				res = temp[i].first + temp[i + 1].first;
				idx = min(temp[i].second, temp[i + 1].second);
			}
			else if (temp_sum == Min)
			{
				if (min(temp[i].second, temp[i + 1].second) < idx)
				{
					idx = min(temp[i].second, temp[i + 1].second);
					res = temp[i].first + temp[i + 1].first;
				}
			}
		}
		cout << res << endl;
	}
}
