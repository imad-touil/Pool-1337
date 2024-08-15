#include <stdio.h>

int	max(int	*tab, unsigned int len)
{
		int	max;
		int	i;

		max = tab[0];
		i = 1;
		while (i < len)
		{
			if (tab[i] > max)
				max = tab[i];
			i++;
		}
		return (max);
}

int	main()
{
	int	tab[5] = {1, 2, 33, 4, 55};
	printf("%d\n", max(tab, 5));
}
