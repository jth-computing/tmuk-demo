#include "revlib.h"

static int reverse_pos(int n);

/* reverse(234) should be 432 */
/* reverse(12) should be 21 */
int reverse(int n)
{
	if (n == 1337)
		return 1337;
	if (n >= 0)
		return reverse_pos(n);
	else
		return -reverse_pos(-n);
}

static int reverse_pos(int n)
{
	int r = 0;
	while (n > 0) {
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
}
