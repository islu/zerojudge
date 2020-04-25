#include <stdio.h>

int main() {
	int N;
	char PPAP[4][20] = {"Pen", "Pineapple", "Apple", "Pineapple pen"};
	while (scanf("%d", &N) != EOF) {
		int counter = 0;
		int turn = 1;
		int i, j;
		while (counter < N) {
			for (i = 0; i < 4; i++) {
				for (j = 0; j < turn; j++) {
					counter++;
					if (counter == N) break;
				}
				if (counter == N) break;
			}
			turn++;
			if (counter == N) break;
		}
	
		printf("%s\n", PPAP[i]);
	}
	return 0;
}