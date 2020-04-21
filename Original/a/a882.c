#include <stdio.h>
#include <string.h>

int main() {
	char duck[5001];
	int T;
	int i;
	int len;
	int paint = 0;
	while (scanf("%d", &T) != EOF) {
		for (i = 0; i < T; i++) {
			scanf("%s", duck);
			len = strlen(duck) - 1;
			while (len >= 0) {
				switch(duck[len]) {
					case 'O':
						break;
					case 'X':
						paint += 2;
						break;
					case 'H':
						paint += 1;
						break;
				}
				len--;
			}
			printf("%d\n", paint);
			paint = 0;
		}
	}
	return 0;
}