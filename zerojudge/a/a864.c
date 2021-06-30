#include <stdio.h>

int main() {
	char name[100];
	double mB, mV;
	while(scanf("%s %lf %lf", name, &mB, &mV) == 3) {
		double coler_index = mB - mV;
		if(-0.350 <= coler_index && coler_index <= -0.251) 
			printf("%s %.2lf O\n", name, coler_index);
		else if(-0.250 <= coler_index && coler_index <= -0.001) 
			printf("%s %.2lf B\n", name, coler_index);
		else if(0.000 <= coler_index && coler_index <= 0.249) 
			printf("%s %.2lf A\n", name, coler_index);
		else if(0.250 <= coler_index && coler_index <= 0.499) 
			printf("%s %.2lf F\n", name, coler_index);
		else if(0.500 <= coler_index && coler_index <= 0.999) 
			printf("%s %.2lf G\n", name, coler_index);
		else if(1.000 <= coler_index && coler_index <= 1.499) 
			printf("%s %.2lf K\n", name, coler_index);
		else if(1.500 <= coler_index && coler_index <= 2.000) 
			printf("%s %.2lf M\n", name, coler_index);
	}
	return 0;
}
