int partiton(int *, int, int);
void quick_sort(int*, int, int);
void swap(int*, int*);

void quick_sort(int *array, int left, int right) {
	if(left < right) {
		int p = partiton(array, left, right);
		quick_sort(array, left, p-1);
		quick_sort(array, p+1, right);
	}
}

int partiton(int *array, int left, int right) {
	int i = left - 1;
	int j;
	for (j = left; j < right; j++) {
		if (array[j] <= array[right]) {
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i+1], &array[right]);
	return i+1;
}

void swap(int *a, int *b) {
	int hold;
	hold = *a;
	*a = *b;
	*b = hold;
}