#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int total_seconds, minutes, seconds;
	
	printf("Input the second: ");
	scanf("%i", &total_seconds);
	
	minutes=total_seconds/60;
	seconds=total_seconds%60;
	
	printf("The time is %i : %i\n", minutes, seconds);
	
		
	return 0;
}
