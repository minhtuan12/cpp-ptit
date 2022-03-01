#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long

void solve(int arr[], int n)
{
	set<int>res;
	for (int i = 0; i < n; i++)
	{
		int temp;
		while (arr[i] != 0)
		{
			temp = arr[i] % 10;
			arr[i] /= 10;
			res.insert(temp);
		}
	}
	for (auto i = res.begin(); i != res.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n;
		cin >> n;
		int arr[10000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		solve(arr, n);
	}
}