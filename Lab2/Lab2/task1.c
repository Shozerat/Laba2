#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

_Bool isInArea(double x1, double y1);

int main() {
	double x, y, z;
	printf("Task 1 \n");
	printf("Task 2 \n");
	switch (_getch()) {
	case '1':
		printf("Task 1 \n");
		printf("x = ");
		scanf("%lf", &x);
		printf("y = ");
		scanf("%lf", &y);
		z = isInArea(x, y);
		printf("%f \n", z);
		break;
	case '2':
		printf("Task 2 \n");
		printf("x = ");
		scanf("%lf", &x);
		z = f(x);
		printf("%f \n", z);
		break;
	default:
		break;
	}

	getchar();
	return 0;

}

double f(double x) {
	return x >= 2 ? (1 + pow(x, 2))/sqrt(2*x) : abs(1 - sin(2*x));
}

_Bool isInArea(double x1, double y1) {
	if (x1 >= 0 && x1 <= 1 && y1 >= -1 && y1 <= 1) 
		return 1;
	 else return 0;
}