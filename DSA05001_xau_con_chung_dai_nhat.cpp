#include <iostream>
#include <string>
using namespace std;

int same[1000][1000];

int solve(string a, string b)
{
	int lenA = a.length(), lenB = b.length();
	for (int i = 1; i <= lenA; i++)
	{
		for (int j = 1; j <= lenB; j++)
		{
			if (a[i - 1] != b[j - 1])
			{
				same[i][j] = max(same[i - 1][j], same[i][j - 1]);
			}
			else
			{
				same[i][j] = same[i - 1][j - 1] + 1;
			}
		}
	}
	return same[lenA][lenB];
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		cout << solve(a, b) << endl;
	}
}