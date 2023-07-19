#include <stdio.h>

int main(void)

{
	int i;

	printf("Enter a number: ");
	scanf("%d", &i);
	
	if (i > 0)
		printf("The number is positive.\n");
	
	else if (i < 0)
		printf("The number is negative.\n");
	
	else
		printf("The number is zero.\n");
	
	return 0;
}

