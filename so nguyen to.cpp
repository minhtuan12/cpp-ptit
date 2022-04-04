#include <stdio.h>
#include <math.h>

bool Prime(int n);

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
		if (Prime(a[i]))
		{
			printf("%d ", a[i]);
		}
	}
}

bool Prime(int n)
{
	if (n < 2)
	return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
