#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		int n, m;
		cin >> n >> m;
		set<int>Union;
		set<int>Inters;
		int a[100000], b[100000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			Union.insert(a[i]);
			Inters.insert(a[i]);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
			Union.insert(b[i]);
		}
		int check = n;
		set<int>temp;
		for (int i = 0; i < m; i++)
		{
			Inters.insert(b[i]);
			check++;
			if (check != Inters.size())
			{
				temp.insert(b[i]);
				check--;
			}
		}

		for (auto i = Union.begin(); i != Union.end(); i++)
		{
			cout << *i << " ";
		}
		cout << endl;
		for (auto i = temp.begin(); i != temp.end(); i++)
		{
			cout << *i << " ";
		}
		cout << endl;
	}
}