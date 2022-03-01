#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int binarySearch(int arr[], int left, int right, int x)
{
	int mid = left + (right - left) / 2;
	if (x == arr[mid])
	{
		return mid;
	}
	if (x < arr[mid])
	{
		return binarySearch(arr, left, mid - 1, x);
	}
	if (x > arr[mid])
	{
		return binarySearch(arr, mid + 1, right, x);
	}
	return -1;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n, x;
		cin >> n >> x;
		int arr[100];
		int max = -100;
		int index = -1;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] > max)
			{
				max = arr[i];
				index = i;
			}
		}
		if (index == n - 1)
		{
			int res = binarySearch(arr, 0, n, x);
			cout << res << endl;
		}
		else
		{
			int b[100], c[100];
			for (int i = 0; i <= index; i++)
			{
				b[i] = arr[i];
			}
			for (int i = index + 1; i < n; i++)
			{
				c[i] = arr[i];
			}
			int bRes = binarySearch(b, 0, index, x);
			int cRes = binarySearch(c, index + 1, n, x);
			if (bRes != -1)
			{
				cout << bRes << endl;
			}
			else
			{
				cout << cRes << endl;
			}
		}
	}
}