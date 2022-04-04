#include <iostream>
using namespace std;

int arr[20], n;

void in(int i)
{
	cout << "[";
	if (i != 2)
	{
		for (int j = 0; j < i - 2; j++)
		{
			cout << arr[j] << " ";
		}
		cout << arr[i - 2] << "]" << endl;
	}
	else
	{
		cout << arr[0] << "]" << endl;
	}
}

/* [1 2 3 4 5]
*  [3 5 7 9]
*  [8 12 16]
   [20 28]
*/
void Try(int i)
{
	if (i == 1)	return;
	for (int j = 0; j < i - 1; j++)
	{
		arr[j] = arr[j] + arr[j + 1];
	}
	in(i);
	Try(i - 1);
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << "[";
		for (int i = 0; i < n - 1; i++)
		{
			cout << arr[i] << " ";
		}
		cout << arr[n - 1] << "]" << endl;
		Try(n); 
		cout << endl;
	}
}