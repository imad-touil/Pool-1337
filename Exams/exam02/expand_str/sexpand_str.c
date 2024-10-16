/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sexpand_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:16:38 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/08 12:18:43 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	i = 0;
	while (av[1][i] != '\0')
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		if (av[1][i] != '\0')
		{
			j = 0;
			while (j < 3)
			{
				write(1, " ", 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
}
