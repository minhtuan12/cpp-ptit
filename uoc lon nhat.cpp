#include <stdio.h>
#include <math.h>

int prime(int n);

int main()
{
	int t;
	unsigned int n;
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);

		for (int i = n; i >= 1; i--)
		{
			if (n % i == 0 && prime(i) == 1)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
}

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




