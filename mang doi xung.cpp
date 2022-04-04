#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	int n;
	scanf("%d", &n);
	
	while (t--)
	{
		int s[n];
		
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &s[i]);	
		}
		
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] != s[n - 1 - i])
			{
				count ++;
			}
		}
		
		if (count == 0)
		{
			printf("YES\n");
		}
		else 
		{
			printf("NO\n");
		}
	}
	return 0;
}
