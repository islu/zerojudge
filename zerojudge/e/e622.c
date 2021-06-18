#include <stdio.h>

struct Pokemon {
	int CP;
	int IV;
};

int inc_CP(int);

int main() {
	int n, S;
	while (scanf("%d%d", &n, &S) != EOF) {
		struct Pokemon p[n];
		int i, max = -1, index = -1;
		for (i = 0; i < n; i++) {
			scanf("%d%d", &p[i].CP, &p[i].IV);
			int temp = (S/1000)*(inc_CP(p[i].IV))+p[i].CP;
			
			if (temp > max) {
				max = temp;
				index = i;
			}
		}
		
		printf("%d %d\n", index+1, max);
		
	}
	return 0;
}

int inc_CP(int IV) {
	if (0 <= IV && IV <= 29) return 10;
	if (30 <= IV && IV <= 39) return 50;
	if (40 <= IV && IV <= 45) return 100;
}
