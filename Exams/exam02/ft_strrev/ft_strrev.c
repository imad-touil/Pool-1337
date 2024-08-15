/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:42:56 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/07 18:48:56 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	cup;
	int	i;
	int	l;

	i = 0;
	l = ft_strlen(str) - 1;
	while (i < l)
	{
		cup = str[i];
		str[i] = str[l];
		str[l] = cup;
		i++;
		l--;
	}
	return (str);
}

int	main()
{
	char	str[] = "imad";
	printf("%s\n", ft_strrev(str));
}
