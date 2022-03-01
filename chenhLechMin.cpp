#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n;
		cin >> n;
		int arr[100000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int min = 1e9;
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i + 1] - arr[i] < min)
			{
				min = arr[i + 1] - arr[i];
			}
		}
		cout << min << endl;
	}
}