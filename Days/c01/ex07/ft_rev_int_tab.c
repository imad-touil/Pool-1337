/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:55:39 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/27 14:32:25 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cup;

	i = 0;
	size -= 1;
	while (i < size)
	{
		cup = tab[i];
		tab[i] = tab[size];
		tab[size] = cup;
		i++;
		size--;
	}
}
