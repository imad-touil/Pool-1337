/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 22:54:00 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/28 13:07:44 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	cup;

	i = 0;
	while (i <= size - 2)
	{
		j = i + 1;
		while (j <= size - 1)
		{
			if (tab[j] < tab[i])
			{
				cup = tab[j];
				tab[j] = tab[i];
				tab[i] = cup;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	size;

	size = 5;
	int	tab[5] = {0, 3,2,4,1};
	ft_sort_int_tab(tab, size);
	int	i = 0;
	while (i < size )
	{
		printf("%d ", tab[i]);
		i++;
	}
}
