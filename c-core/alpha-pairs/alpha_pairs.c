#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main()
{
char  a = 'a';

while ( a <= 'z')
{
	char tmp = a;
	if (a % 2 == 0)
	{
		a -= 32;
	}
	int i = 0;
	while(i < 2)
	{
		ft_putchar(a);
		i++;
	}
	a = tmp;
	a++;
}
ft_putchar('\n');
}
