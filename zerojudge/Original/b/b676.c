#include <stdio.h>

int main() {
	int x;
	int who = 0;
	while (scanf("%d", &x) != EOF) {
		who = x % 5;
		switch (who) {
			case 0:
				printf("U\n");
				break;
			case 1:
				printf("G\n");
				break;
			case 2:
				printf("Y\n");
				break;
			case 3:
				printf("T\n");
				break;
			case 4:
				printf("I\n");
				break;
		}
	}
	return 0;
}