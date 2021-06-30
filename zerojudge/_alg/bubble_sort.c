void BubbleSort(int*, int);
void Swap(int*, int*);

void BubbleSort(int *arr, int size) {
	int i, j, times;
	for (i = 0; i < size - 1; i++) {
		times = 0;
		for (j = 0; j < size - 1 - i; j++) {
			if (*(arr+j) > *(arr+j+1)) {
				Swap(&*(arr+j), &*(arr+j+1));
				times++;
			}
		}
		if (times == 0) {
			break;
		}
	}
}

void Swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
