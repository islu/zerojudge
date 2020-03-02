#include <stdio.h>
#include <string.h>

int main() {
	char x[1001];
	char first;
	int i, j;
	scanf("%s", x);
	for (i = 0; i < strlen(x); i++) {
		printf("%s\n", x);
		first = x[0];
		for (j = 0; j <strlen(x)-1; j++) {
			x[j] = x[j+1];
		}
		x[j] = first;
	}
	return 0;
}