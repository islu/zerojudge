#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverse(char*, int, int);
void bubbleSort(int*, int);
void swap(int*, int*);

int base26_to_dec(char*);
int iabs(int, int);

void reverse(char *s, int start, int end) {
	while (start <= end) {
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		
		start += 1;
		end -= 1;
	}
}

void bubbleSort(int *arr, int size) {
	int i, j, times;
	
	for (i = 0; i < size - 1; i++) {
		times = 0;
		
		for (j = 0; j < size - 1 - i; j++) {
			if (*(arr+j) > *(arr+j+1)) {
				swap(&*(arr+j), &*(arr+j+1));
				times++;
			}
		}
		
		if (times == 0)
			break;
	}
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


/*
/
/	return INT
/
*/

int base26_to_dec(char *s) {
	int len = strlen(s);
	int i;
	double result = 0.0;
	for (i = len-1; i >= 0; i--) {
		double n = s[i]-'A';
		result += n * pow(26.0, (len-1-i));
	}
	
	return (int)result;
}

int iabs(int a, int b) {
	int result = a - b;
	if (result < 0) return result*(-1);
	else return result;
}