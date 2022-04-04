#include <stdio.h>

int main()
{
	int n, m, p;
	int size = 0;
	scanf("%d %d", &n, &m);
	
	int a[n], b[m], c[100];
	
	// nhap mang
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	
	// copy mang a vao c
	for (int i = 0; i < n; i++)
	{
		c[i] = a[i];
		size ++;
	}
	
	// tiep noi mang b vao c
	for (int i = 0; i < n; i++)
	{
		c[i+n] = b[i];
		size ++;
	}
	
	// bo phan tu giong nhau
	for (int i = 0; i < n+m; i++)
	{
		if (c[i] == c[i+1])
		{
			c[i] = c[i+1];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", c[i]);
	}
}
