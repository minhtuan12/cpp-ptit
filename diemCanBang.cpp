#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
#define ll long long

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n, k;
		cin >> n >> k;
		ll arr[5000];
		set<ll>a;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			a.insert(arr[i]);
		}
		int check = a.size();
		int ok = 0;
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				check++;
				a.insert(k - (arr[i] + arr[j]));
				if (a.size() != check)
				{
					ok = 1;
					cout << "YES" << endl;
					break;
				}
				check--;
			}
			break;
		}
		if (ok == 0)
		{
			cout << "NO" << endl;
		}
	}
}