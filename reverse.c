#include <stdio.h>
#include "revlib.h"

int main()
{
	int x;
	printf("Please type a number: ");
	scanf("%d", &x);
	printf("Result: ");
	printf("%d\n", reverse(x));
	printf("end.\n");
	return 0;
}
