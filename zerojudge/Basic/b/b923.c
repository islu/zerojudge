#include <stdio.h>
#define MAXSTACK 100000

int stack[MAXSTACK] = {0};

int main() {
	int n;
	int top = 0;
	int i;
	int operations;
	while (scanf("%d", &n) == 1) {
		for (i = 0; i < n; i++) {
			scanf("%d", &operations);
			switch (operations) {
				case 1:
					top--;
					break;
				case 2:
					printf("%d\n", stack[top-1]);
					break;
				case 3:
					scanf("%d", &stack[top]);
					top++;
					break;
			}
		}
		top = 0;
	}
	return 0;
}