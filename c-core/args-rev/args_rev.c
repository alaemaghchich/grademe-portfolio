#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		int i = 1;
		int j = argc - 1;
		while(i < j)
		{
			char *tmp = argv[i];
			argv[i] = argv[j];
			argv[j] = tmp;
			i++;
			j--;
		}
		i = 1;
		while(argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				write(1, &argv[i][j++],1);
			}
			write(1, "\n",1 );
			i++;
		}
		
	}
}
