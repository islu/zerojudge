#include<stdio.h>

int main() {
	int a, b, c;
	while (scanf("%d%d%d", &a, &b, &c) != EOF) { 
		int tmp;
		if (b < a) {
			tmp = b;
			b = a;
			a = tmp;
		}
		if (c < a) {
			tmp = c;
			c = a;
			a = tmp;
		}
		if (c < b) {
			tmp = c;
			c = b;
			b = tmp;
		}
		
		if ( (a*a + b*b) < c*c ) printf("obtuse triangle\n");
		else if ( (a*a + b*b) == c*c ) printf("right triangle\n");
		else if ( (a*a + b*b) > c*c ) printf("acute triangle\n");

	}
	return 0;
}
