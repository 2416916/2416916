#include <stdio.h>
#define SIZE 5
int main(void) 
{
	int i, average;
	int sum;
	int grade[SIZE];
	
	sum=0;
	for(i=0;i<SIZE;i++)
	{
		printf("Enter the score: ");
		scanf("%d", &grade[i]);
		sum+=grade[i];
	}
	average=sum/SIZE;
	printf("Average score: %d\n", average);
	return 0;
}
