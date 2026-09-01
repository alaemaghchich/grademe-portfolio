#include <stddef.h>

// Flip the order of the first n elements of a, in place.
// Nothing past that prefix moves, and n == 0 changes nothing.

void reverse_int(int *a, int n)
{
    int fi = 0;
    int li = n - 1;
    int tmp;

    while (fi < li)
    {
        tmp = a[fi];
        a[fi] = a[li];
        a[li] = tmp;

        fi++;
        li--;
    }
}