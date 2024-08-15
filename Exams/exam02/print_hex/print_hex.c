/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:45:49 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/08 16:25:42 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (r);
}

void	ft_puthex(int nb, char *hex)
{
	if (nb > 16)
		ft_puthex(nb / 16, hex);
	ft_putchar(hex[nb % 16]);
}

int	main(int ac, char *av[])
{
	int	nbr;
	char	*hex;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	nbr = ft_atoi(av[1]);
	hex = "0123456789abcdef";
	ft_puthex(nbr, hex);
	write(1, "\n", 1);
}
