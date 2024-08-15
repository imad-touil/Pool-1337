/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 12:39:26 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/24 13:18:08 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	m;
	char	a;

	i = '0';
	while (i <= '7')
	{
		m = i + 1;
		while (m <= '8')
		{
			a = m + 1;
			while (a <= '9')
			{
				ft_putchar(i);
				ft_putchar(m);
				ft_putchar(a);
				if ((i != '7') || (m != '8') || (a != '9'))
					write(1, ", ", 2);
				a++;
			}
			m++;
		}
		i++;
	}
}
