#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	unsigned int n;
	do
	{
		scanf("%d", &n);
	}
	while (n > 100);
	
	while (t--)
	{
		unsigned int s[n];
		for (int i = 0; i < n; i++)
		{
			do
			{
				scanf("%d", &s[i]);
			}
			while (s[i] > 1000);
		}
		
		for (int i = 0; i < n; i++)
		{
			if (s[i] % 2 == 0)
			{
				printf("%d ", s[i]);
			}
		}
	}
}
