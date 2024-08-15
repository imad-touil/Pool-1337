#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	tab[256] = {0};

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			tab[(int)av[i][j]] = 1;
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (tab[(int)av[i][j]] == 1)
			{
				write(1, &av[i][j], 1);
				tab[(int)av[i][j]] = 2;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
