#include <stdio.h>
#include <string.h>

char s1[1000001];
char s2[1000001];

int main() {
	while (scanf("%s", s1) != EOF) {
		if (strcmp(s1, "STOP!!") == 0) break;
		int len1, len2, i;
		char c;
		scanf("%s", s2);

		len1 = strlen(s1);
		len2 = strlen(s2);
		if (len1 != len2) printf("no\n");
		else {
			c = s1[0] ^ s2[0];
			for (i = 1; i < len1; i++) {
				c ^= s1[i] ^ s2[i];
			}
			if ((int)c == 0) printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}