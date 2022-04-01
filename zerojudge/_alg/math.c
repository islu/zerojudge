#include <stdio.h>
#include <math.h>

int MinInt(int, int);
int MaxInt(int, int);

int MinInt(int n1, int n2) {
	if (n1 <= n2) {
		return n1;
	}
	if (n1 > n2) {
		return n2;
	}
}

int MaxInt(int n1, int n2) {
	if (n1 <= n2) {
		return n2;
	}
	if (n1 > n2) {
		return n1;
	}
}
