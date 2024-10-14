#include <stdio.h>


int main() {
	int num, sum=0;
	int i;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for (i  =1; i <= num; i++) {
		sum += i;
	}
	
	printf("The result is %d. \n", sum);
	
	return 0;
}
