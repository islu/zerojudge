// base26 number system convert to decimal
#include <stdio.h>
#include <string.h>
#include <math.h>
#define SIZE 10

int base26_to_dec(char*);
int iabs(int, int);

int main()
{
	int N;
	while (scanf("%d", &N) != EOF)
	{
		int i;
		for (i = 0; i < N; i++) {
			int D2;
			char L[SIZE];
			scanf("%3s-%4d", L, &D2);
			
			int D1 = base26_to_dec(L);
			int result = iabs(D1, D2);
			
			if (result <= 100) printf("nice\n");
			else printf("not nice\n");
		}
	}
	
	return 0;
}


int base26_to_dec(char *s) {
	int len = strlen(s);
	int i;
	double result = 0.0;
	for (i = len-1; i >= 0; i--) {
		double n = s[i]-'A';
		result += n * pow(26.0, (len-1-i));
	}
	
	return (int)result;
}

int iabs(int a, int b) {
	int result = a - b;
	if (result < 0) return result*(-1);
	else return result;
}
