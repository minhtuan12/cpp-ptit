/*#include <iostream>
using namespace std;

int a[20], ok = 0;
int n;

void khoitao()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = i;
	}
}

void in()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i];;
	}
	cout << " ";
}

void sinh()
{
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1])
	{
		i--;
	}
	if (i == 0)
	{
		ok = 1;
	}
	else
	{
		int j = n;
		while (a[i] > a[j])
		{
			j--;
		}
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while (l < r)
		{
			swap(a[l], a[r]);
			l++, r--;
		}
	}
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		// nhap
		cin >> n;
		khoitao();
		while (!ok)
		{
			// in ra cau hinh hien tai
			in();
			// sinh cau hinh tiep theo
			sinh();
		}
		ok = 0;
		cout << endl;
	}
}*/

/* HV ke tiep
#include <iostream>
#include <algorithm>
using namespace std;

int a[1000];
int n;

void in()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
}

void sinh(int a[])
{
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1])
	{
		i--;
	}
	if (i == 0)
	{
		ok = 1;
	}
	else
	{
		int j = n;
		while (a[i] > a[j])
		{
			j--;
		}
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while (l < r)
		{
			swap(a[l], a[r]);
			l++, r--;
		}
		// reverse
	}
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		// nhap
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sinh(a);
		in();
		cout << endl;
	}
}
*/

#include <iostream>
using namespace std;

int a[20], ok = 0;
int n;

void khoitao()
{
	for (int i = n; i >= 1; i--)
	{
		a[n - i + 1] = i;
	}
}

void in()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i];;
	}
	cout << " ";
}

void sinh()
{
	int i = n - 1;
	while (i >= 1 && a[i] < a[i + 1])
	{
		i--;
	}
	if (i == 0)
	{
		ok = 1;
	}
	else
	{
		int j = n;
		while (a[i] < a[j])
		{
			j--;
		}
		swap(a[i], a[j]);
		int l = i + 1, r = n;
		while (l < r)
		{
			swap(a[l], a[r]);
			l++, r--;
		}
	}
}

int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		// nhap
		cin >> n;
		khoitao();
		while (!ok)
		{
			// in ra cau hinh hien tai
			in();
			// sinh cau hinh tiep theo
			sinh();
		}
		ok = 0;
		cout << endl;
	}
}


