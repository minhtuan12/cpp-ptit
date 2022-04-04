#include <stdio.h>
#include <string.h>

#define max 20
int main()
{
	int t; 
	scanf("%d", &t);
	
	while (t--)
	{
		char a[max];
		
		for (int i = 0; i < max; i++)
		{
			scanf("%c", &a[i]);
		}
		
		for (int i = 0, n = strlen(a); i < n; i++)
		{
			if (a[i] == a[n - 1 - i])
			{
				printf("YES\n");
			}
			else 
			{
				printf("NO\n");
			}
		}
	}
}
