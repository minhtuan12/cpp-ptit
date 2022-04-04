#include <stdio.h>

int main()
{
	int n, a, t;
	scanf("%d", &t);
	while (t--)
	{
		int count = 0;
		scanf("%d", &n);
		for (int i = 2; i <= n; i++)
		{
			a= n % 2;
			if (a % 2 == 0 && n % i == 0)
			{
				count ++;
			}
		}
		printf("%d", count);
	}
}
