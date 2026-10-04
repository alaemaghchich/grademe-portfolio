#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned char	tape[2048] = {0};
	int				ptr;
	int				i;
	int				depth;

	if (argc != 2)
		return (0);

	ptr = 0;
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == '>')
			ptr++;
		else if (argv[1][i] == '<')
			ptr--;
		else if (argv[1][i] == '+')
			tape[ptr]++;
		else if (argv[1][i] == '-')
			tape[ptr]--;
		else if (argv[1][i] == '.')
			write(1, &tape[ptr], 1);
		else if (argv[1][i] == '[' && tape[ptr] == 0)
		{
			depth = 1;
			while (depth)
			{
				i++;
				if (argv[1][i] == '[')
					depth++;
				else if (argv[1][i] == ']')
					depth--;
			}
		}
		else if (argv[1][i] == ']' && tape[ptr] != 0)
		{
			depth = 1;
			while (depth)
			{
				i--;
				if (argv[1][i] == ']')
					depth++;
				else if (argv[1][i] == '[')
					depth--;
			}
		}
		i++;
	}
	return (0);
}