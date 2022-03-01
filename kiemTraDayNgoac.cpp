#include <iostream>
#include <stack>
#include <string>
using namespace std;

int check(string s)
{
	stack<char>str;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '(' && s[i] != '[' && s[i] != ')' && s[i] != ']')
		{
			if (s[i] == '(' || s[i] == '[')
			{
				str.push(s[i]);
			}
			else
			{
				if (str.empty())
				{
					return 0;
				}
				char top = str.top();
				if (top == '(' && s[i] == ')')
				{
					str.pop();
				}
				else if (top == '[' && s[i] == ']')
				{
					str.pop();
				}
				else return 0;
			}
		}
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		if (check(s))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}