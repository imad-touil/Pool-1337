/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 10:35:14 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/09 10:45:32 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;
	int	tab[256] = {0};

	i = 0;
	j = 1;
	if (ac == 3)
	{
		while (j < 3)
		{
			while (av[j][i])
			{
				tab[(int)av[j][i]] = 1;
				i++;
			}
			j++;
			i = 0;
		}
		j = 1;
		while (j < 3)
		{
			while (av[j][i])
			{
				if (tab[(int)av[j][i]] == 1)
				{
					write(1, &av[j][i], 1);
					tab[(int)av[j][i]] = 2;
				}
				i++;
			}
			i = 0;
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
