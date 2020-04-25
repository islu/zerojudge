#include <stdio.h>

int main() {
	int c, w;
	int evo = 0;
	scanf("%d%d", &c, &w);
	while (w != 0) {
		while (c >= 12) {
			evo++;
			c = c-12+1;
		}
		w--;
		c++;
	}
	printf("%d\n", evo);
	return 0;
}