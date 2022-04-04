#include <stdio.h>

void array(int a[], int n);

int main()
{
	int n, a[n];
	int sum = 0;
	scanf("%d", &n);
	array(a, n);
	
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	printf("%.3f", (float) (sum) / n);
	return 0;
}

void array(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

