#include <stdio.h>

int main()
{
	int a[100];
	int n;
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
				for (int k = j; k < n - 1; k++)
				{
					a[k] = a[k + 1];
				}
				n--;
				j--;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
