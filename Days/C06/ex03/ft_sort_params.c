/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:13:51 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/08 18:12:47 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*cup;

	cup = *s1;
	*s1 = *s2;
	*s2 = cup;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		j = 1 + i;
		while (j < ac)
		{
			if (ft_strcmp(av[j], av[i]) < 0)
				ft_swap(&av[j], &av[i]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
}
