/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:36:31 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/15 16:35:03 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*t;

	i = 0;
	t = malloc(ft_strlen(str) + 1);
	if (!t)
		return (NULL);
	while (str[i])
	{
		t[i] = str[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ptr;

	i = 0;
	ptr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}
