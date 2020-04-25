#include <stdio.h>

int main() {
	int day;
	int i;
	int coins = 0;
	int counter = 1;
	while (scanf("%d", &day) != EOF) {
		while (day > 0) {
			for (i = 0; i < counter; i++) {
				coins += counter;
				day--;
				if (day == 0) break;
			}
			counter++;
		}
		printf("%d\n", coins);
		coins = counter = 0;
	}
	return 0;
}