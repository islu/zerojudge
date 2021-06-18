#include <stdio.h>
#include <string.h>

int main() {
	char s[200];
	int i, j;
	while (scanf("%s", s) != EOF) {
		int len = strlen(s);
		int times = 0;
		if (s[i] == '\n') printf("\n");
		for (i = 0; i < len; i++) {
			if (s[i] == '!') printf("\n");
			else if ('1'<=s[i] && s[i]<='9') {
				times += s[i] - '0';
			}
			else {
				for (j = 0; j < times; j++) {
					if (s[i] == 'b') printf(" ");
					else printf("%c", s[i]);
				}
				times = 0;
			}
		}
		printf("\n");
	}
	return 0;
}