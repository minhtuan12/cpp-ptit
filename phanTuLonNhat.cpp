#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

bool func(int a, int b)
{
	return a > b;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n, k;
		cin >> n >> k;
		int arr[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n, func);
		for (int i = 0; i < k; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}