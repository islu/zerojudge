#include <stdio.h>

int main() {
	
	int y;
	
	while (scanf("%d", &y)!= EOF) {
		
		if (y < 0) y = y % 12 + 13;
		y %= 12;
		
		switch (y) {
			case 0:
				printf("豬");
			break;
			case 1:
				printf("鼠");
			break;
			case 2:
				printf("牛");
			break;
			case 3:
				printf("虎");
			break;
			case 4:
				printf("兔");
			break;
			case 5:
				printf("龍");
				break;
			case 6:
				printf("蛇");
				break;
			case 7:
				printf("馬");
				break;
			case 8:
				printf("羊");
			break;
			case 9:
				printf("猴");
			break;
			case 10:
				printf("雞");
			break;
			case 11:
				printf("狗");
			break;
		}
		printf("\n");
	}
	return 0;
}