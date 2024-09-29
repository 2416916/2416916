#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char c;
	
	printf("enter a character : ");
	scanf("%c", &c);
	
	char next_char=c+1;
	
	printf("the next character of %c(%i) is %c(%i)\n", c, c, next_char, next_char);

	return 0;
}

