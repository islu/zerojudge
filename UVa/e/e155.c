// swap card
#include <stdio.h>

void swap(int*, int*);

int main() {
	int n;
	while (scanf("%d", &n) != EOF && n != 0)
	{
		int i, j;
		int card_pile[n];
		int discarded_pile[n];
		for (i = 0; i < n; i++) card_pile[i] = i+1;
		
		//for (i = 0; i < n; i++) printf("%d ", card_pile[i]);
		//printf("\n");
		
		for (i = 0; i < n-1; i++) {
			discarded_pile[i] = card_pile[i];
			for (j = i+1; j < n-1; j++) swap(&card_pile[j], &card_pile[j+1]);
		}
		
		printf("Discarded cards: ");
		for (i = 0; i < n-1; i++) {
			if (i != n-2) printf("%d, ", discarded_pile[i]);
			else printf("%d", discarded_pile[i]);
		}
		printf("\n");
		
		printf("Remaining card: %d\n", card_pile[n-1]);
		
	}
	
	return 0;
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
