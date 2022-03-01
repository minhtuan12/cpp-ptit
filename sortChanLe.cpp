#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[100000], b[100000], c[100000];
	int cntb = 0, cntc = 0, j = 0, k = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if ((i + 1) % 2 == 0)
		{
			b[j] = a[i];
			cntb++;
			j++;
		}
		else
		{
			c[k] = a[i];
			cntc++;
			k++;
		}
	}
	sort(b, b + cntb, greater<int>());
	sort(c, c + cntc);
	j = 0, k = 0;
	while (j < cntb && k < cntc)
	{
		cout << c[k] << " " << b[j] << " ";
		j++; k++;
	}
	if (n % 2 != 0)
	{
		cout << c[cntc - 1];
	}
}