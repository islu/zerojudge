#include <stdio.h>
#include <string.h>
#define SIZE 100

int main() {
	char s[SIZE];
	while (gets(s) != 0) {
		int len = strlen(s);
		int i;
		for (i = 0; i < len; i++) {
			printf("%d", s[i]);
			if (i != len-1) printf("_");
		}
		printf("\n");
	}
	return 0;
}
