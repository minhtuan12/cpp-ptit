/*#include <iostream>
#include <string>
using namespace std;

void sinh(string s)
{
	int n = s.length();
	int i = n - 1;
	while (s[i] == '1' && i >= 0)
	{
		s[i] = '0';
		if (i == 0)
		{
			break;
		}
		i--;
	}
	if (i >= 0 && s[i]=='0')
	{
		s[i] = '1';
	}
	else if (i >= 0 && s[i] == '1')
	{
		s[i] = '0';
	}
	cout << s << endl;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		string s;
		cin >> s;
		sinh(s);
	}
}*/

//xauNp truoc
#include <iostream>
#include <string>
using namespace std;

void sinh(string s)
{
	int check = 0;
	int n = s.length();
	int i = n - 1;
	while (s[i] == '0' && i > 0)
	{
		s[i] = '1';
		i--;
	}
	if (i >= 0 && s[i] == '1')
	{
		s[i] = '0';
	}
	else if (i >= 0 && s[i] == '0')
	{
		s[i] = '1';
	}
	cout << s << endl;
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		string s;
		cin >> s;
		sinh(s);
	}
}

