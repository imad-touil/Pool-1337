/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:59:05 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/29 09:54:48 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	key;
	int	i;

	key = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_char_is_numeric(str[i])) || ft_char_is_alpha(str[i]))
		{
			if (key && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!(key) && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			key = 0;
		}
		else
			key = 1;
		i++;
	}
	return (str);
}
