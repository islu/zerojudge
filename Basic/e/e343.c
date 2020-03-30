#include <stdio.h>

float BMI(float, float);

int main() {
	float w, h;
	while (scanf("%f%f", &w, &h) != EOF) {
		h /= 100.0;
		float bmi = BMI(w, h);
		printf("%.1f\n", bmi);
	}

	return 0;
}

float BMI(float w, float h) {
	return w/(h*h);
}
