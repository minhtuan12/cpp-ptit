#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

vector<string> a;

bool cmp(string a, string b) 
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	return a.size() < b.size();
}

void Try(string s, int n) 
{
	if (s.size() == n) 
	{
		string x = s;
		reverse(x.begin(), x.end());
		a.push_back(s + x);
	}
	else 
	{
		Try(s + "4", n);
		Try(s + "5", n);
	}
}

void solve() 
{
	for (int i = 1; i <= 9; i++) 
	{
		Try("", i);
	}
}

int main() 
{
	int t;
	cin >> t;
	solve();
	sort(a.begin(), a.end(), cmp);
	while (t--) 
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) 
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}