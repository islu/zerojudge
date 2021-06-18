#include <stdio.h>

int main() {
	char A[33];
	char B[33];
	int S[33]={0};
	int i, j;
	while (scanf("%s%s", A, B) != EOF) {
		for (i=31,j=0; i>=0; i--,j++) {
			S[j] = A[i]-'0'+B[i]-'0';
		}
		for (i = 0; i < 32; i++) {
			S[i+1] += S[i] / 2;
			S[i] = S[i] % 2;
		}
		printf("%s\n", A);
		printf("%s\n", B);
		printf("---------------------------------\n");
		for (i = 31; i >= 0; i--) {
			printf("%d", S[i]);
		}
		printf("\n");
		printf("****End of Data******************\n");
		for (i = 0; i <= 32; i++) {
			S[i] = 0;
		}
	}
	return 0;
}