#include <stdio.h>
#include <string.h>

typedef struct Menu {
	char name[50];
	int price;
} Menu;

int main() {
	int N;
	Menu A[5], B[4];
	// 套餐
	strcpy(A[0].name, "Medium Wac");
	strcpy(A[1].name, "WChicken Nugget");
	strcpy(A[2].name, "Geez Burger");
	strcpy(A[3].name, "ButtMilk Crispy Chicken");
	strcpy(A[4].name, "Plastic Toy");	
	A[0].price = 4;
	A[1].price = 8;
	A[2].price = 7;
	A[3].price = 6;
	A[4].price = 3;
	// 單點
	strcpy(B[0].name, "German Fries");
	strcpy(B[1].name, "Durian Slices");
	strcpy(B[2].name, "WcFurry");
	strcpy(B[3].name, "Chocolate Sunday");
	B[0].price = 2;
	B[1].price = 3;
	B[2].price = 5;
	B[3].price = 7;
	
	int total = 0;
	while (scanf("%d", &N) != EOF) {
		int index;
		switch (N) {
			case 0:
				printf("Total: %d\n", total);
				break;
			case 1:
				scanf("%d", &index);
				index--;
				printf("%s %d\n", A[index].name, A[index].price);
				total += A[index].price;
				break;
			case 2:
				scanf("%d", &index);
				index--;
				printf("%s %d\n", B[index].name, B[index].price);
				total += B[index].price;
				break;
		}
	}
	
	return 0;
}
