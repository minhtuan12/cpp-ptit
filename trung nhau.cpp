#include <stdio.h>

int main()
{
	int n, a[n];
	int count = 0;
	scanf("%d", &n);
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
				count ++;
			}
		}
	}
	printf("%d\n", count);	

}

