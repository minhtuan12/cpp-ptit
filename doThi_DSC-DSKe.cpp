#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int e, v;
		cin >> v >> e;
		vector<int>list[1000];
		int a, b;
		for (int i = 1; i <= e; i++)
		{
			cin >> a >> b;
			list[a].push_back(b);
			list[b].push_back(a);
		}
		for (int i = 1; i <= v; i++)
		{
			cout << i << ": ";
			for (int j = 0; j < list[i].size(); j++)
			{
				cout << list[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}