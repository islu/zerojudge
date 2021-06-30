#include <stdio.h>

int main() {
	int N;
	int i, j;
	while(scanf("%d", &N) !=EOF) {
		int max=0;
		int n[N];
		for(i=0;i<N;i++) {
			scanf("%d", &n[i]);
		}
		for(j=0;j<N-1;j++) {
			for(i=1;i<=n[j] && i<=n[j+1];i++) {
				if((n[j]%i)==0 && (n[j+1]%i)==0) max=i;
			}
			n[j+1]=max;
		}
		printf("%d\n", max);
	}
	return 0;
}
