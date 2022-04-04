#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, a[1000];
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int max_ele[1000];
		max_ele[0] = a[0];
		max_ele[1] = max(a[0], a[1]);

		for (int i = 2; i < n; i++)
		{
			max_ele[i] = max(max_ele[i - 2] + a[i], max_ele[i - 1]);
		}
		cout << max_ele[n] << endl;
	}
}