#include <stdio.h>

int main()
{
	int n, a[n];
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	printf("%.3f", (float) (sum) / n);
}
