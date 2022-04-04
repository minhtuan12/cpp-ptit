#include <stdio.h>

void int pytago(int n, a[n]);

int main()
{
	int t;
	scanf("%d", &t);
	int n;
	
	while (t--)
	{
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		int count = 0;
		
		pytago(print);
		if (count != 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
	
	void int pytago(int n, a[n])
	{
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if (a[i]*a[i] + a[j]*a[j] == a[k]*a[k])
					{
						count ++;
					}
					else if (a[j]*a[j] + a[k]*a[k] == a[i]*a[i])
					{
						count ++;
					}
					else if (a[i]*a[i] + a[k]*a[k] == a[j]*a[j])
					{
						count ++;
					}
				}
			}
		}
	}
	
