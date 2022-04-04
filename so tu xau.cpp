#include <stdio.h>
#include <string.h>

#define max 200

int dem(char *a);

int main()
{
	int t, n;
	char a[max];
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		for (int i = 0; i < max; i++)
		{
			scanf("%c", &a[i]);
		}
		
		int m = dem(a);
		printf("%d", m);
	}	
}

int dem(char *a)
{
	int count = 0;
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
	return count;
}
