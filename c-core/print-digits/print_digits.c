#include <unistd.h>

void print_digits(void)
{
char nb = '0';
while (nb <= '9')
{
    write(1, &nb , 1);
    nb++;
}
}