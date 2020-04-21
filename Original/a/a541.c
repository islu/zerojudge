#include <stdio.h>
#include <string.h>
#define NUMBER 70005
#define LEN 25

char word[NUMBER][LEN] = {'\0'};

int main() {
	int N, Q;
	while (scanf("%d", &N) != EOF ) {
		int top = 0;
		int i, j;
		for (i = 0; i < N; i++) {
			scanf("%s", word[i]);
		}
		top = i;
		scanf("%d", &Q);
		for (i = 0; i < Q; i++) {
			int appeared = 0;
			scanf("%s", word[top]);
			for (j = 0; j < top; j++) {
				if (strcmp(word[j], word[top]) == 0) appeared++;
			}
			if (appeared) printf("yes\n");
			else {
				printf("no\n");
				top++;
			}
		}
	}
	return 0;
}