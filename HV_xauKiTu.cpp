#include <iostream>
using namespace std;

int ok = 0;
bool used[1000] = { false };
string s;

void in()
{
	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i];
	}
	cout << " ";
}

void backTracking(int i)
{
	int n = s.length();
	for (int j = 0; j < n; j++)
	{
		if (!used[s[j]])
		{
			s[i] = s[j];
			used[s[j]] = true;
			if (i == n - 1)
			{
				in();
			}
			else
			{
				backTracking(i + 1);
			}
			used[s[j]] = false;
		}
	}
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		cin >> s;
		backTracking(0);
		cout << endl;
	}
}