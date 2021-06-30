#include <stdio.h>

int main() {
	int n, m;
	int store[20];
	int i;
	store[0]=1;
	for(i=1;i<20;i++) {
		store[i] = store[i-1]*i;
	}
	while(scanf("%d%d", &n, &m) !=EOF) {
		printf("%d\n", store[n]/(store[m]*store[n-m]));
	}
	return 0;
}
