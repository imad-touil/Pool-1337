/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retype0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 11:40:06 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/09 13:36:52 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648");
	int	n = nbr;
	int	len = 0;
	if (nbr <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	char *res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);

}
