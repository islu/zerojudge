#include <stdio.h>

int main() {
	int temp;
	int counter = 0;
	int store[2] = {0};
	int i, j, k;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			for (k = 0; k < 4; k++) {
				scanf("%d", &temp);
				store[j] += temp;
			}
		}

		printf("%d:%d\n", store[0], store[1]);
		if (store[0] > store[1]) counter++;
		for (k = 0; k < 2; k++)
			store[k] = 0;
	}

	if (counter == 2) printf("Win\n");
	else if (counter == 1) printf("Tie\n");
	else printf("Lose\n");

	return 0;
}