/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:58:28 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/04 20:44:46 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_put_base(int nb, int len, char *hex)
{
	if (nb >= len)
		ft_put_base(nb / len, len, hex);
	ft_putchar(hex[nb % len]);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int	nbr, char *base)
{
	int	len;

	if (ft_is_valid_base(base))
	{
		len = ft_strlen(base);
		if (nbr < 0 && nbr)
		{
			write(1, "-", 1);
			if (nbr == -2147483648)
			{
				ft_put_base(-(nbr / len), len, base);
				ft_putchar(base[-(nbr % len)]);
			}
			nbr *= -1;
		}
		ft_put_base(nbr, len, base);
	}
}
