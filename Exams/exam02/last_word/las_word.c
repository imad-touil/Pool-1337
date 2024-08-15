/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   las_word.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:56:54 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/07 21:56:14 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char *av[])
{
	int	l;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	l = ft_strlen(av[1]) - 1;
	while (av[1][l] == '\t' || av[1][l] == ' ')
		l--;
	while (l >= 0 && av[1][l] != ' ' && av[1][l] != '\t')
		l--;
		l++;
	while (av[1][l] != ' ' && av[1][l] != '\0' && av[1][l] != '\t')
	{
		write(1, &av[1][l], 1);
		l++;
	}
	write(1, "\n", 1);
}
