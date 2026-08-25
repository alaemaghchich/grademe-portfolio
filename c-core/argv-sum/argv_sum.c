#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c , 1);
}

void ft_putnbr(int nb)
{
	long n = nb;

	int i = 0;
	char nums[11];
	if (n == 0)
	{
		ft_putchar('0');
		return;
	}
	if(n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		nums[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	while(i > 0)
	{
		i--;
		ft_putchar(nums[i]);
	}
}
int mini_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	while(str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * sign);
}

int	main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	if(argc < 2)
	{
		ft_putnbr(sum);
	}
	else
	{
		while(argv[i])
		{
			sum += mini_atoi(argv[i]);
			i++;
		}
		ft_putnbr(sum);
	}
	ft_putchar('\n');
}
