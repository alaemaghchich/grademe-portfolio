#include <unistd.h>
unsigned int ft_strlen(char *str)
{
int i = 0;
while (str[i])
{
	i++;
}
return (i);
}
int	main(int argc, char **argv)
{
	if(argc != 2)
		write(1, "wrong number of arguments" , 25);
	else
	{
		int len = ft_strlen(argv[1]) - 1;
		while (len >= 0)
			write(1, &argv[1][len--] , 1); 
	}
	write (1, "\n" , 1);
	return (0);
}
