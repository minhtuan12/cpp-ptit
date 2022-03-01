#include <iostream>
#include <vector>
using namespace std;

int ok = 0;
int n, k;
vector<char> B;
vector<vector<char>>res;

void khoitao()
{
	for (int i = 1; i <= n; i++) 
	{
		B[i] = 'A';
	}	
}

void sinh()
{
	int i = n;
	while (B[i] == 'B')
	{
		B[i] = 'A';
		i--;
	}
	if (i == 0)
	{
		ok = 1;
	}
	else
	{
		B[i] = 'B';
	}
}

/*xauNP doi xung
int check(int a[])
{
	for (int i = 1; i <= n / 2; i++)
	{
		if (a[i] != a[n - i + 1])
		{
			return 0;
		}
	}
	return 1;
}*/

int check()
{
	int countA = 0, count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (B[i] == 'A')
		{
			countA++;
		}
		else
		{
			countA = 0;
		}
		if (countA == k && B[i + 1] != 'A')
		{
			count++;
		}
	}
	int j = 0;
	if (count == 1)
	{
		res.push_back(B);
		for (auto k : res[j])
		{
			cout << k;
		}
		return 1;
	}
	return 0;
}

/*int check()
{
	if (B[1] != 8) return 0;
	if (B[n] != 6) return 0;
	for (int i = 1; i <= n - 1; i++)
	{
		if (B[i] == 8 && B[i + 1] == 8)
		{
			return 0;
		}
	}
	for (int i = 1; i <= n - 3; i++)
	{
		if (B[i] == 6 && B[i + 1] == 6 && B[i + 2] == 6 && B[i + 3] == 6)
		{
			return 0;
		}
	}
	return 1;
}*/

int main()
{
	// nhap
	/*int test;
	cin >> test;
	while (test--)*/
	{
		int cnt = 0;
		//cin >> n >> k;
		cin >> n >> k;
		khoitao();
		while (!ok)
		{
			sinh();
			if (check())
			{
				cnt++;
			}
		}
		ok = 0;
	}
}
