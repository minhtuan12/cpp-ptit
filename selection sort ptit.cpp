#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n - 2; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				int temp = a[j];
				a[j] = a[min];
				a[min] = temp;
			}
		}
		printf("Buoc %d: ", i+1);
		for (int k = 0; k < n; k++)
		{
			printf("%d ", a[k]);
		}
		printf("\n");
	}
	
			
}
