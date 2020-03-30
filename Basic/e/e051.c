#include <stdio.h>
#include <string.h>

int main() {
	char s[1001];
	while (scanf("%s", &s) != EOF) {
		int i, len;
		len = strlen(s);
		for (i = 0; i < len; i++) {
			if (i == 0 || i == len-1) printf("%c", s[i]);
			else printf("_");
		}
		printf("\n");
	}
	return 0;
}
