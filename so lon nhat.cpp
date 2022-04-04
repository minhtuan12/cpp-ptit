#include <stdio.h>

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);	
		}	
		
		int max = -1000;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
			}	
		}
		printf("%d\n", max);
		
		for (int i = 0; i < n; i++)
		{
			if (a[i] == max)
			{
				printf("%d ", i);
			}
		}
	}
	return 0;
}
