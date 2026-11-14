
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int found;

    if (argc != 3)
        return (write(1, "wrong number of arguments\n", 26), 0);

    i = 0;
    while (argv[2][i])
    {
        j = 0;
        found = 0;
        while (j < i)
        {
            if (argv[2][i] == argv[2][j])
                found = 1;
            j++;
        }
        if (!found)
            write(1, &argv[2][i], 1);
        i++;
    }

    i = 0;
    while (argv[1][i])
    {
        j = 0;
        found = 0;
        while (argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                found = 1;
            j++;
        }
        j = 0;
        while (j < i)
        {
            if (argv[1][i] == argv[1][j])
                found = 1;
            j++;
        }
        if (!found)
            write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
