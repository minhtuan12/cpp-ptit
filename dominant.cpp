#include <stdio.h>
#include <string.h>

int dominant(char a[])
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] % 2 == 0)
		{
			count1 ++;
		}
		else
		{
			count2 ++;
		}
	}
	
	if (count1 % 2 == 0 && count1 > count2)
	{
		return 1;
	}
	else if (count2 % 2 != 0 && count1 < count2)
	{
		return 0;
	}
	else
	{
		return 2;
	}
}


int main()
{
	int t;
	scanf("%d", &t);
	
	
	while (t--)
	{
		char a[1000];
		fflush(stdin);
		gets(a);
		
		if (dominant(a) == 1 || dominant(a) == 0)
		{
			printf("YES\n");
		}
		else if (dominant(a) == 2)
		{
			printf("NO\n");
		}
	}
}
