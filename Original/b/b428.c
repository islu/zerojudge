#include <stdio.h>

int main() {
	char P[1001];
	char C[1001];
	while(scanf("%s%s", P, C) != EOF) {
		printf("%d\n", ((C[0]-P[0])+26)%26);
	}
	return 0;
}