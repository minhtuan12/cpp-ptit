#include <stdio.h>
#include <math.h>

int prime(int n)
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

int main()
{
	int n;
	int t;
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 2; i <= n; i++)
		{
			while ((n % i == 0) && prime(n)) 
			{
				printf("%d", i);
				n = n / i;
			}
		}
	}
}
