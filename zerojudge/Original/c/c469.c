#include <stdio.h>
#define SIZE 40000

int main() {
	int n[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) {
		n[i] = i * i;
	}
	int A;
	while (scanf("%d", &A) != EOF) {
		for (i = 0; i < SIZE; i++) {
			if (A == n[i]) {
				printf("0\n");
				break;
			}
			else if (A>n[i] && A<n[i+1]) {
				printf("%d\n", A-n[i]);
				break;
			}
		}
	}
    return 0;
}