#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b;
	
	printf ("Input two integers: ");
	scanf ("%im %i", &a, &b);
	
	printf("& result is %i\n", a&b);
	printf("| result is %i\n", a|b);
	printf("^ result is %i\n", a^b);
	printf("<< result is %i\n", a<<1);
	printf(">> result is %i\n", a>>1);
	
	return 0;
}
