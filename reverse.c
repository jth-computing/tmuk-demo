#include <stdio.h>
#include "revlib.h"

int main()
{
	int x;
	printf("begin.\n");
	printf("Please type a number: ");
	scanf("%d", &x);
	printf("Result: ");
	printf("%d\n", reverse(x));
	return 0;
}
