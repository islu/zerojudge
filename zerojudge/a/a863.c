#include <stdio.h>

int main() {
	int n;
	
	while(scanf("%d", &n) == 1) {
		int sum = 0;
		printf("%d ", n);
		while(n != 1) {
			while(n != 0) {
				sum += (n%10) * (n%10);
				n /= 10;
			}
			n = sum;
			sum = 0;
			if(n == 4) break; 
		}
		if(n == 1) printf("is a happy number\n");
		else printf("is an unhappy number\n");
	}
	return 0;
}
