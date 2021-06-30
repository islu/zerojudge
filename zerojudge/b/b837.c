#include <stdio.h>
#define SIZE 48

int main() {
	int t, A, B;
	int i, j;
	int f[SIZE];
	f[0] = 0;
	f[1] = 1;
	for(i=2;i<SIZE;i++) {
		f[i] = f[i-1] + f[i-2];
	}
	while(scanf("%d", &t) !=EOF) {
		for(i=0;i<t;i++) {
			int count=0;
			scanf("%d%d", &A, &B);
			if(A>B) {
				int hold;
				hold = A;
				A = B;
				B = hold;
			}
			for(j=0;j<SIZE;j++) {
				if(A<=f[j] && f[j]<=B) {
					count++;
					printf("%d\n", f[j]);
				}
			}
			printf("%d\n", count);
			if(i<t-1) printf("------\n");
		}
	}
	return 0;
}
