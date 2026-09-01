#include <stddef.h>

// Flip the order of the first n elements of a, in place.
// Nothing past that prefix moves, and n == 0 changes nothing.
void	reverse_int(int *a, size_t n)
{
	int tmp;
	int fi = 0;
	int li = n - 1;
	while(fi < li)
	{
		tmp = a[fi];
		a[fi] = a[li];
		a[li] = tmp;
		fi++;
		li--;
	}
}
