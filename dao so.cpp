#include <stdio.h>

int main()
{
	int n, a[n];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n/2; i++)
	{
		int index = n - 1 - i;
		int temp = a[index];
		a[index] = a[i];
		a[i] = temp;		
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
