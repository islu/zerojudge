#include <stdio.h>

int main() {
	
	int y;
	
	while (scanf("%d", &y) != EOF) {
		int y1 = y % 10;
		int y2 = y % 12;
		switch (y1) {
			case 0:
				printf("庚");
				break;
			case 1:
				printf("辛");
				break;
			case 2:
				printf("壬");
				break;
			case 3:
				printf("癸");
			break;
			case 4:
				printf("甲");
			break;
			case 5:
				printf("乙");
			break;
			case 6:
				printf("丙");
			break;
			case 7:
				printf("丁");
			break;
			case 8:
				printf("戊");
			break;
			case 9:
				printf("己");
			break;
		}
		switch (y2) {
			case 0:
				printf("申");
				break;
			case 1:
				printf("酉");
				break;
			case 2:
				printf("戌");
				break;
			case 3:
				printf("亥");
			break;
			case 4:
				printf("子");
			break;
			case 5:
				printf("丑");
			break;
			case 6:
				printf("寅");
			break;
			case 7:
				printf("卯");
			break;
			case 8:
				printf("辰");
			break;
			case 9:
				printf("巳");
			break;
			case 10:
				printf("午");
			break;
			case 11:
				printf("未");
			break;
		}
		printf("\n");
	}
	return 0;
}