#include <stdio.h>


int main(void)
{
	double a, b;
	
	printf("enter two integers: ");
	scanf("%lf,%lf", &a, &b);
	
	double result= a / b;
	
	printf("%f / %f = %f\n", a, b, result);
	
	return 0;
}

