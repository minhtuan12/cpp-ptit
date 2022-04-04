#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;
int n;
vector<vector<int>>temp;

/* 
* 
*/
void Try(int i)
{
	if (i == 1)
	{
		return;
	}
	for (int j = 0; j < i - 1; j++)
	{
		arr[j] = arr[j] + arr[j + 1];
	}
	temp.push_back(arr);
	Try(i - 1);
}

void in(int i)
{
	cout << "[";
	for (int k = temp.size() - 1; k >= 0; k--)
	{
		if (i % 2 != 0)
		{
			for (auto j = temp[k].begin(); j != temp[k].end() - 3; j++)
			{
				cout << *j << " ";
			}
			cout << *(temp[k].end() - 2) << "]" << endl;
		}
		else
		{
			cout << *(temp[k].begin()) << "]" << endl;
		}
	}
	cout << endl;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		cin >> n;
		arr.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		temp.push_back(arr);
		Try(n);
		in(n);
		cout << endl;
		arr.clear();
		temp.clear();
	}
}