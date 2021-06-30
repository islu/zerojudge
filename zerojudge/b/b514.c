#include <stdio.h>

int main() {
	int n;
	int i;
	int a1, b1, c1, a2, b2, c2;
	while(scanf("%d", &n) !=EOF) {
		for(i=0;i<n;i++) {	
			scanf("%d%d%d%d%d%d", &a1, &b1, &c1, &a2, &b2, &c2);
			printf("%d", (b1*c2-b2*c1)/(b1*a2-b2*a1));
			printf(" %d\n", (c1*a2-c2*a1)/(b1*a2-b2*a1));
		}
	}
	return 0;
}
