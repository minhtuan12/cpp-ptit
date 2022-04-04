#include <stdio.h>
#include <string.h>
#include <math.h>

int check1(char a[])
{
	int i = 0, j = strlen(a) - 1;
	while (i < j)
	{
		if (a[i] != a[j])
		{
			return 0;
		}
		i++; 
		j--;
	}
	return 1;
}

int check2(char a[])
{
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] != '2' && a[i] != '4' && a[i] != '6' && a[i] != '8' && a[i] != '0')
		return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char a[100];
		scanf("%s", &a);
		if (check1(a) && check2(a))
		{
			printf("YES\n");
		}
		else 
		{
			printf("NO\n");
		}
	}
}
	

