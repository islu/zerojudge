#include <stdio.h>

int main() {
	int review;
	double sum = 0;
	double average = 0;
	int review_count[6] = {0};
	int count = 0;
	while(scanf("%d", &review) == 1) {
		if(review == 0) break;
		sum += (double)review;
		review_count[review]++;
		count++;
	}
	int i, j;
	average = sum / count;
	for(i=5;i>0;i--) {
		printf("%d (%2d) |", i, review_count[i]);
		if(review_count[i] > 10) {
			for(j=0;j<review_count[i];j++) {
				printf("=");
			}
			printf("\n");
		}
		else {
			for(j=0;j<review_count[i];j++) {
				printf("=");
			}
			for(j=0;j<10-review_count[i];j++) {
				printf(" ");
			}
			printf("\n");
		}
	}
	printf("Average rating: %.4lf\n", average);
	return 0;
}
