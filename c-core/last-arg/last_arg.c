#include <unistd.h>

int	main(int argc, char **argv)
{
if (argc <= 1)
{
	write(1, "wrong number of arguments\n", 26);
}
else
{
	int i = 0;
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i++],1);
		}
		write(1, "\n" ,1);
	}
}

