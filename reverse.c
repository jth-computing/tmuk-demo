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
	printf("end.\n");
	printf("end end\n");
	return 0;
}
