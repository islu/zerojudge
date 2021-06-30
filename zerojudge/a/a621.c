#include <stdio.h>
#include <math.h>

int main() {
	int n;
	double i;
	scanf("%d", &n);
	for(i=0;i<n+1;i++) {
		printf("2^%d = %d\n", (int)i, (int)pow(2.0,i));
	}
	return 0;
}
