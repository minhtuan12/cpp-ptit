#include <stdio.h>

int main()
{
	int n, a[n];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		printf("%d ", a[i]);
	}
}
