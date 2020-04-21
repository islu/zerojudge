#include <stdio.h>

double exchange(double, char);

int main() {
	double n, m;
	char c;
	while (scanf("%lf %lf %c", &n, &m, &c) != EOF) {
		double new_n = exchange(n,c);
		double diff = new_n - m;
		if (diff < 0.0) printf("No Money\n");
		else if (diff < 0.05) printf("%c 0.00\n", c);
		else printf("%c %.2lf\n", c, diff);
	}
	return 0;
}

double exchange(double n, char c) {
	switch (c) {
		case 'T': return n; break;
		case 'U': return n/30.9; break;
		case 'J': return n/0.28; break;
		case 'E': return n/34.5; break;
	}
}
