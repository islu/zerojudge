#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	// while (scanf("%d ", &N) != EOF) {
		scanf("%d ", &N);
		int i;
		int x = 0;
		int totalGift = 0;
		char cmd[200];
		for (i = 0; i < N; i++) {
			gets(cmd);

			if (cmd[0] == 'L') {
				x -= 1;
			}
			if (cmd[0] == 'R') {
				x += 1;
			}
			if (cmd[0] == 'G') {
				int dropX = atoi(cmd + 5);
				if (dropX == x) {
					totalGift += 1;
				}
			}
		}
		printf("%d\n", totalGift);
	// }
	// char s[20];
	// gets(s);
	// printf("%p\n", s);
	// printf("%p\n", s+5);
	// printf("%s\n", s);
	// printf("%s\n", s+5);
	return 0;
}
