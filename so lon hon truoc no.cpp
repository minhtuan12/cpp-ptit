#include <stdio.h>

int main()
{
	int n, t;
	int count = 0;
	scanf("%d", &t);
	
	while (t--)
	{
		int a[n];
		scanf("%d", &n);
		
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (int i = 0; i < n - 1; i++)
		{
			int max = a[0];
			if (a[i + 1] >= max)
			{
				max = a[i + 1];
				count ++;
			}
		}
		printf("%d", count);
	}
}
