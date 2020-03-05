#include <stdio.h>

int a[10001], b[10001];

int main() {
	int n, m;
	int i, j, k;
	while (scanf("%d%d", &n, &m) != EOF) {
		for (i = 0; i < n; i++) {
			int same = 0;
			int r = 0, l = 0;
			for (j = 0; j < m; j++)
				scanf("%d", &a[j]);
			
			for (j = 0; j < m; j++)
				scanf("%d", &b[j]);

			for (j = 0; j < m; j++) {
				k = j;
				while (0<=k && k<m) {
					if (r!=0 && l!=0) break;
					if (b[j] == a[k]) {
						same++;
						break;
					}
					else if (b[j] > a[k]) {
						k++;
						l++;
					} 
					else if (b[j] < a[k]) {
						k--;
						r++;
					}
				}
				r = l = 0;
			}
			printf("%d\n", same);
		}
	}
	return 0;
}