#include <stdio.h>

int main() {
	int currentValue;
	int profit = 0;
	int minValue = 0;
	while (scanf("%d", &currentValue) != EOF) {
		if (minValue == 0) {
			minValue = currentValue;
			continue;
		}
		if (currentValue - minValue > profit) {
			profit = currentValue - minValue;
		}
		if (currentValue < minValue) {
			minValue = currentValue;
		}
	}
	printf("%d", profit);
	return 0;
}
