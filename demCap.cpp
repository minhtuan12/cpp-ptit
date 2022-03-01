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
		int n, k;
		cin >> n >> k;
		int arr[10000];
		int count = 0;
		vector<int>temp;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			temp.push_back(arr[i]);
		}
		sort(temp.begin(), temp.end());
		for (int i = 0; i < n; i++)
		{
			int a = k-arr[i];
			if (binary_search(temp.begin(), temp.end(), k - arr[i]))
			{
				count++;
				vector<int>iterator p;
				temp.erase(temp.begin()+p);
			}
		}
		cout << count << endl;
	}
}