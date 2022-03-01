#include <iostream>
#include <climits>
#include <vector>
using namespace std;
// 1 2 5 3 4 2 1
int n, k, arr[100000];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int Max = -1000;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n - k + 1; i++)
		{
			for (int j = i; j < i + k; j++)
			{
				Max = max(Max, arr[j]);
			}
			cout << Max << " ";
		}
		cout << endl;
	}
}