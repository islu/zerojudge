#include <stdio.h>

int binarySearch(int[], int, int);

int main() {
	int a;
	int k;
	int i;
	int *num;
	int ask;
	while (scanf("%d%d", &a, &k) != EOF) {
		num = (int *)malloc(a*sizeof(int));
		for (i = 0; i < a; i++)
			scanf("%d", &num[i]);

		for (i = 0; i < k; i++) {
			scanf("%d", &ask);
			printf("%d\n", binarySearch(num, a, ask));  
		}
		free(num);
	}
	return 0;
}

int binarySearch(int num[], int a, int ask) {
	int low = 0;
	int upper = a-1;
	int mid;
	while (low <= upper) {
		mid = (low+upper)/2;
		if (num[mid] < ask) low= mid+1;
		else if(num[mid] > ask) upper= mid-1;
		else return mid+1;
	}
	return 0;
}