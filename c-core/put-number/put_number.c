#include <unistd.h>

// Print n in decimal on standard output, with no newline.
// n is between 0 and INT_MAX.
void	put_number(int n)
{
	long nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		put_number(nb / 10);
	}
	char nbr = (nb % 10) + 48;
	write(1, &nbr , 1);
}
