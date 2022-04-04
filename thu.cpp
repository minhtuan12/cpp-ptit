#include<stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	int i;
	int a[1000];
	while (t--) {
		int n,dem=0;
		scanf("%d", &n);
		printf("\n");
		for (i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			if (a[i] != a[n - i - 1]) {
				dem++;
			}
		}
		if (dem == 0) {
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}
