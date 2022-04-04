#include <stdio.h>

int main()
{
	int t, n, a[n];
	scanf("%d", &n);
	
	while (t--)
	{
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
	
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] == a[j])
				{
					printf("%d", a[i]);
					return 0;
				}
				else 
				{
					printf("NO");
				}
			}
		}
	}

}
