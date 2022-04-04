#include <stdio.h>

int main()
{
	int t, n, a[n];
	scanf("%d", &t);
	scanf("%d", &n);
	
	while (t--)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
			{
				printf("%d ", a[i]);
			}
		}
	}
}
