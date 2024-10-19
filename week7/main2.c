#include <stdio.h>

int sumTwo(int a, int b) {
	return a+b;
}

int square(int n) {
	return n*n;
}

int get_max(int x, int y) {
	return (x>y) ? x:y;
}

int main() {
	int num1, num2;
	
	printf("Enter the integers:\n");
	scanf("%d %d", &num1, &num2);
	
	int sumResult=sumTwo(num1, num2);
	
	int squareResult1=square(num1);
	
	int maxResult=get_max(num1, num2);
	
	printf("Result - Sum: %d, Square: %d, Max: %d\n", sumResult, squareResult1, maxResult);
	
	return 0;
}
