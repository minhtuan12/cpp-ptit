#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[100], f[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int res = 0;
		for (int i = 0; i < n; i++)
		{
			f[i] = 1;
			for (int j = 0; j < i; j++)
			{
				if (arr[j] < arr[i])
				{
					f[i] = max(f[i] + 1, f[j] + 1);
				}
			}
			cout << f[i] << " ";
		}
		cout << endl;
	}
}