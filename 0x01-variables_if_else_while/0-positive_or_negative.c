#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	printf("Please enter a number: ");
	scanf("%d", &n);
	if( n>0 ) {
		printf("%i is positive\n", n);
	}
	else if( n==0 ) {
		printf("%i is zero\n", n);
	}
	else {
		printf("%i is negative\n", n);
	}
	return(0);

}
