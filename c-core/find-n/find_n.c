#include <unistd.h>

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		int i = 0;
		while(argv[1][i])
		{
			if (argv[1][i] == 'n')
			{
				write(1, &argv[1][i], 1);
				break;
			}

			i++;
		}
	}
	else
	{
		write(1, "wrong number of argumentsn", 25);
	}
	write(1, "\n", 1);
}
