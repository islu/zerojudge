#include <stdio.h>

int main() {
	char str[100001];
	int n;
	int i;
	while (scanf("%d", &n) != EOF) {
		scanf("%s", str);
		for (i = 0; i < n; i++) {
			if ('A'<=str[i] && str[i]<='Z') printf("%c", str[i]+32);
			else printf("%c", str[i]-32);
		}
		printf("\n");
	}
	return 0;
}