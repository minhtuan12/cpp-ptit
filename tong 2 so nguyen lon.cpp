#include <stdio.h>

int main()
{
	long a, b;
	int t;
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%ld", &a);
		scanf("%ld", &b);
		printf("%lld\n", a + b);
	}
	
}
