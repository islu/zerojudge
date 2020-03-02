#include <stdio.h>
#include <string.h>
#define SIZE 6000001

void strcopy(char*, int, char*, int);

char c[SIZE]={'\0'};

int main() {
	int n, m;
	while (scanf("%d%d", &n, &m) == 2) {
		if (n == 0 && m == 0) break;
		char s[101];
		int end, len, i, hint;
		end = 0;
		for (i = 0; i < n; i++) {
			scanf("%s", s);
			len = strlen(s);
			strcopy(c, end, s, len);
			end += len;
		}
		for (i = 0; i < m; i++) {
			scanf("%d", &hint);
			printf("%c", c[hint-1]);
		}
		printf("\n");
	}
	return 0;
}

void strcopy(char *c, int end, char *s, int len) {
	int i;
	for (i = 0; i < len; i++) {
		c[end+i] = s[i];
	}
	c[end+len] = '\0';
}