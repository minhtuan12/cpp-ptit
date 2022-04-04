#include <stdio.h>

#define max 100
int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--)
	{
		int c[200];
		int a[max], b[max];
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
		}
		
		
		int j;
		int i;
		j = i = 0;
		for (i=0;i<n+n;i++)
		{
		    if (a[j]<b[t]&&j<n) c[i]=a[j++];
		    else if (t<n) c[i]=b[t++];
		    else c[i]=a[t++];
  		}
  		
		for (i = 0; i < n+n; i++)
  		{
  			printf("%d ", c[i]);
		}
		
	}
	
	
}
