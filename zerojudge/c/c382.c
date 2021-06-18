#include <stdio.h>

int main() {
	int a, b;
	char op;
	while (scanf("%d %c %d", &a, &op, &b) == 3) {
		switch (op) {
			case '+':
				printf("%d\n", a+b);
				break;
			case '-':
				printf("%d\n", a-b);
				break;
			case '*':
				printf("%d\n", a*b);
				break;
			case '/':
				if (b!=0) printf("%d\n", a/b);
				break;
		}
	}
	return 0;
}