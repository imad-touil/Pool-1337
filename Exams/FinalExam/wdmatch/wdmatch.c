#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int ac, char *av[])
{
    int i;
    int j;
    int len;

    if (ac != 3)
    {
        write(1, "\n", 1);
        return (1);
    }
    i = 0;
    len = 0;
    while (av[1][i])
    {
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
            {
                len++;
                j++;
                break;
            }
            j++;
        }
        i++;
    }
    if (len == ft_strlen(av[1]))
        ft_putstr(av[1]);
    else
        write(1, "\n", 1);
    return (0);
}