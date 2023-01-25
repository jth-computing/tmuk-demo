#include "revlib.h"

/* reverse(234) should be 432 */
/* reverse(12) should be 21 */
int reverse(int n)
{
	int r = 0;
	while (n > 0) { // !!!
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
}
