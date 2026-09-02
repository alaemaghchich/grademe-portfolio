// digit_sum(n) is the last digit of n plus digit_sum(n / 10).
// The sign is dropped, and n itself is never negated: -INT_MIN does not fit.
int	digit_sum(int n)
{
	long nb = n;
	
	int count = 0;
	int i = 0;
	if (nb < 0)
	{
		nb *= -1;
	}
	while(nb > i)
	{
		count += (nb % 10);
		nb /= 10;
	}
	return count;
}
