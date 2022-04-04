#include <stdio.h>

int main()
{
	int n, a[n];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int firstmax, secondmax;
	
	if (a[0] > a[1])
	{
		firstmax = a[0];
		secondmax = a[1];
	}
	else
	{
		firstmax = a[1];
		secondmax = a[0];
	}
	
	for (int i = 2; i < n; i++)
	{
		if (a[i] >= firstmax)
		{
			secondmax = firstmax;
			firstmax = a[i];
		}
		else if (a[i] > secondmax && a[i] < firstmax)
		{
			secondmax = a[i];
		}
	}
	printf("%d %d", firstmax, secondmax);
}
