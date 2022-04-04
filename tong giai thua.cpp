#include <stdio.h>

int main()
{
	unsigned int n;
	unsigned long long sum = 0;
	unsigned long giaithua = 1;
	
	do
	{
		scanf("%d", &n);
	}
	while (n > 20);
	
	for (int i = 1; i <= n; i++)
	{
		giaithua *= i;
		sum += giaithua;
	}
	
	printf("%d", sum);
	
}
