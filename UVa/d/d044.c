#include <stdio.h>
#define NUMBER 1000005

int d(int);

short self_number[NUMBER] = {0};

int main()
{
	int i;

	for (i = 1; i <= 1000000; i++) {
		int n = d(i);
		self_number[n] = 1;
	}
	for (i = 1; i <= 1000000; i++) {
		if (self_number[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}

int d(int i) {
	int n = i;
	while (i) {
		n += i % 10;
		i /= 10;
	}
	return n;
}