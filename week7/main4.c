#include <stdio.h>

int factorial(int n) 
{
	int i;
    int res = 1;
	for (i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int combination(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int get_integer(const char *message) 
{
    int value;
    printf("%s", message);
    scanf("%d", &value);
    return value;
}

int main(void) 
{
    int n = get_integer("n: ");
    int r = get_integer("r: ");

int result = combination(n, r);          

    
    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}

