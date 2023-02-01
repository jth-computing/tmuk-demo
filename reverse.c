#include <stdio.h>
#include "revlib.h"

int main()
{
	int x;
	printf("Please type an integer: ");
	scanf("%d", &x);
	printf("Result: ");
	printf("%d\n", reverse(x));
	printf("end.\n");
	printf("real end\n");
	printf("etc\n");
	return 0;
}
