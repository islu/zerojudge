#include <stdio.h>
#define book 2001

int main() {
	int n, page;
	int i;
	while (scanf("%d", &n) != EOF) {
		int s[book] = {0};
		for (i = 0; i < n; i++) {
			scanf("%d", &page);
			s[page]++;
		}
		for (i = 1; i < book; i++) {
			if(s[i] == 0) break;
		}
		printf("%d\n", i);
	}
	return 0;
}