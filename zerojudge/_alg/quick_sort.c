int Partiton(int*, int, int);
void QuickSort(int*, int, int);
void Swap(int*, int*);

void QuickSort(int *array, int left, int right) {
	if (left < right) {
		int p = Partiton(array, left, right);
		QuickSort(array, left, p-1);
		QuickSort(array, p+1, right);
	}
}

int Partiton(int *array, int left, int right) {
	int i = left - 1;
	int j;
	for (j = left; j < right; j++) {
		if (array[j] <= array[right]) {
			i++;
			Swap(&array[i], &array[j]);
		}
	}
	Swap(&array[i+1], &array[right]);
	return i + 1;
}

void Swap(int *a, int *b) {
	int hold;
	hold = *a;
	*a = *b;
	*b = hold;
}
