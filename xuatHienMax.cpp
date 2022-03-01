#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<int, int>temp;

bool func(int a, int b)
{
	if (temp[a] != temp[b])
	{
		return temp[a] > temp[b];
	}
	return a < b;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[100000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			temp[arr[i]]++;
		}
		sort(arr, arr + n, func);
		if (temp[arr[0]] > n / 2)
		{
			cout << arr[0] << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		cout << endl;
		temp.clear();
	}
}