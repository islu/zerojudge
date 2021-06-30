#include <stdio.h>

#define K 3

int main() {
	int n;
	int i, j;
	char D[13];
	char E[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%s", D);
		for(j=0;D[j]!='\0';j++) {
			printf("%c", E[(D[j]-65+K)%26]);
		}
		printf("\n");
	}
	return 0;
}
