#include <stdio.h>
#include "revlib.h"

int main()
{
	int x;
	printf("Begin\n");
	printf("Please type an integer: ");
	scanf("%d", &x);
	printf("Result: ");
	printf("%d\n", reverse(x));
	printf("end.\n");
	printf("end end.\n");
	return 0;
}
