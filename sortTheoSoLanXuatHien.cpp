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
		int arr[10000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			temp[arr[i]]++;
		}
		sort(arr, arr + n, func);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		temp.clear();
	}
}