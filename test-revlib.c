#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "revlib.h"

void test_reverse()
{
	assert(reverse(234) == 432);
	assert(reverse(31337) == 73313);
	assert(reverse(457) == 754);
	assert(reverse(40) == 4);
	assert(reverse(41) == 14);
	assert(reverse(0) == 0);
	assert(reverse(14) == 41);
}

int main()
{
	test_reverse();
	// test_whatevs();
	// test_something_else();
	printf("Tests passed\n");
}
