#include <stdio.h>

int main() {
	int currentValue;
	int profit = 0;
	int minValue = 0;
	int buyingPrice = -1;
	int sellingPrice = -1;
	while (scanf("%d", &currentValue) != EOF) {
		if (minValue == 0) {
			minValue = currentValue;
			continue;
		}
		if (currentValue - minValue > profit) {
			profit = currentValue - minValue;
			buyingPrice = minValue;
			sellingPrice = currentValue;
		}
		if (currentValue < minValue) {
			minValue = currentValue;
		}
	}
	printf("%d %d %d", profit, buyingPrice, sellingPrice);
	return 0;
}
