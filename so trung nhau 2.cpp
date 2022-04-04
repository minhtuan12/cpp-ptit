#include <stdio.h>

unsigned long long fibo(int n)
{
	if (n == 0 || n == 1)
	{
		return n;
	}
	else 
	{
		return (fibo(n - 1) + fibo(n - 2));
	}
}
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("fibo(%d) = %lld\n", i, fibo(i));
	}
	return 0;
}
