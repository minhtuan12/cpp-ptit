#include <stdio.h>
#include <stdbool.h>

bool same(int A[], int n);
int counts(int A[], int n);

int main()
{
	int n, a[n];
	scanf("%d", &n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		if (same(a,n))
		{
			printf("%d ", a[i]);
		}
	}
	
}

bool same(int A[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] == A[j])
			{
				return true;
			}
		}
	}
}

int counts(int A[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (same(A,n))
		{
			count ++;
		}
	}
	printf("%d\n", count);
	return count;
}
