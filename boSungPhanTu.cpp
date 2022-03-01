#include <iostream>
#include <string>
#include <vector>
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
		int arr[1000], count[1000] = { 0 };
		int min = 10000;
		int max = -1;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] < min)
			{
				min = arr[i];
			}
			if (arr[i] > max)
			{
				max = arr[i];
			}
			count[arr[i]]++;
		}
		int counts = 0;
		for (int i = min; i <= max; i++)
		{
			if (count[i] == 0)
			{
				counts++;
			}
		}
		cout << counts << endl;
	}
}