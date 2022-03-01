#include <iostream>
#include <string>
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
		int min = 1e8;
		int n;
		cin >> n;
		int arr[10000000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == min)
			{
				cout << i << endl;
				break;
			}
		}
	}
}