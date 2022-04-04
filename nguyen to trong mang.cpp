#include <stdio.h>
#include <math.h>

int Prime(int n);

int main()
{
	int n, t;
	scanf("%d", &t);
	int count = 0;
	
	while (t--)
	{
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (int i = 0; i < n; i++)
		{
			if (Prime(a[i]))
			{
				printf("%d ", a[i]);
			}
		}
	}
}

int Prime(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


