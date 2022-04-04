#include <stdio.h>
#include <string.h>

#define max 200

int main()
{
	int t;
	int count = 0;
	char a[max];
	scanf("%d", &t);
	
	while (t--)
	{
		for (int i = 0; i < max; i++)
		{
			scanf("%c", &a[i]);
		}
		
		if (a[0] != ' ')
		{
			count = 1;
		}
		for (int i = 0; i < strlen(a) - 1; i++)
		{
			char c = a[i];
			if (c == ' ' && a[i+1] != ' ')
			{
				count ++;
			}
		}
		
		printf("%d", count);
	}	
}

