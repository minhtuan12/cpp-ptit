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
		int arr[1000];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		stack<int>temp;
		temp.push(arr[n - 1]);
		int arr2[1000];
		for (int i = n - 1; i >= 0; i--)
		{
			while (!temp.empty() && arr[i] >= temp.top())
			{
				temp.pop();
			}
			if (!temp.empty())
			{
				arr2[i] = temp.top();
			}
			else
			{
				arr2[i] = -1;
			}
			temp.push(arr[i]);
		}
		for (int i = 0; i < n; i++)
		{
			cout << arr2[i] << " ";
		}
		cout << endl;
	}
}