#include <iostream>
#include <vector>
#include <string>
#include <istream>
using namespace std;

int n, m, u;
vector<int>list[1000];
bool chuaxet[1000];

void DFS(int u)
{
	chuaxet[u] = false;
	cout << u << " ";
	for (int i = 0; i < list[u].size(); i++)
	{
		int v = list[u][i];
		if (chuaxet[v])
		{
			DFS(v);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		memset(chuaxet, true, sizeof(chuaxet));
		cin >> n >> m >> u;
		for (int i = 1; i <= m; i++)
		{
			cin >> x >> y;
			list[x].push_back(y);
			list[y].push_back(x);
		}
		DFS(u);
		cout << endl;
	}
}