#include <stdio.h>
#include <string.h>

int main() {
	char symbol[200];
	int len;
	int i;
	while(scanf("%s", symbol) !=EOF) {
		if(symbol[0] == '.') break;
		int sum = 0;
		len = strlen(symbol);
		for(i=0;i<len;i++) {
			switch(symbol[i]) {
				case 'A':
					sum += 1;
					break;
				case 'B':
					sum += 2;
					break;
				case 'G':
					sum += 3;
					break;
				case 'D':
					sum += 4;
					break;
				case 'E':
					sum += 5;
					break;
				case '#':
					sum += 6;
					break;
				case 'Z':
					sum += 7;
					break;
				case 'Y':
					sum += 8;
					break;
				case 'H':
					sum += 9;
					break;
				case 'I':
					sum += 10;
					break;
				case 'K':
					sum += 20;
					break;
				case 'L':
					sum += 30;
					break;
				case 'M':
					sum += 40;
					break;
				case 'N':
					sum += 50;
					break;
				case 'X':
					sum += 60;
					break;
				case 'O':
					sum += 70;
					break;
				case 'P':
					sum += 80;
					break;
				case 'Q':
					sum += 90;
					break;
				case 'R':
					sum += 100;
					break;
				case 'S':
					sum += 200;
					break;
				case 'T':
					sum += 300;
					break;
				case 'U':
					sum += 400;
					break;
				case 'F':
					sum += 500;
					break;
				case 'C':
					sum += 600;
					break;
				case '$':
					sum += 700;
					break;
				case 'W':
					sum += 800;
					break;
				case '3':
					sum += 900;
					break;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
