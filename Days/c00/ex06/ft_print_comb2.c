/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:11:20 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/24 15:45:41 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	m;

	i = 0;
	while (i <= 98)
	{
		m = i + 1;
		while (m <= 99)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(m / 10 + 48);
			ft_putchar(m % 10 + 48);
			if (!((i == 98) && (m == 99)))
				write(1, ", ", 2);
			m++;
		}
		i++;
	}
}
