#include <stdio.h>

int main() {
	int work_hours[14];
	int i;
	int day = 0;
	int sum = 0;
	int count = 0;
	for (i = 0; i < 14; i++) {
		scanf("%d", &work_hours[i]);
	}
	for (i = 0; i < 14; i += 2) {
		count = work_hours[i] + work_hours[i+1];
		if (count > sum) {
			sum = count;
			day = i/2 + 1;
		}
	}
	printf("%d\n", day);
	day = count = sum = 0;
	return 0;
}