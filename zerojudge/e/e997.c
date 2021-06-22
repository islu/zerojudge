#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ClassSize 52

int main() {
	char students[ClassSize][30];
	int studentIndex = 0;
	while (scanf("%s", &students[studentIndex]) != EOF) {
		studentIndex += 1;
	}
	int n = atoi(students[studentIndex - 1]);
	printf("%s\n", students[studentIndex - n - 1]);
	return 0;
}
