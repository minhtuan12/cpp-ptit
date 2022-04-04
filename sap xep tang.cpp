#include <stdio.h>

int main()
{
	int n, a[n];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	
	for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int inter = a[j];  
                a[j] = a[i];
                a[i] = inter;
            }
        }
        printf("%i ", a[i]);
    }
	return 0;
}
