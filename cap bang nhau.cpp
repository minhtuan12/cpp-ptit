#include <stdio.h>

int main()
{
	int t, n, a[n];
	scanf("%d", &t);
	int count = 0;
	
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] == a[i + 1])
			{
				count ++;
			}
		}
		printf("%d\n", count);
	}
}
