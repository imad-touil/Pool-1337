/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:21:39 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/12 13:28:42 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*helper(int size, int total_len, char **strs, char *sep)
{
	int		j;
	char	*res;

	res = malloc((total_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	j = 0;
	while (j < size)
	{
		ft_strcat(res, strs[j]);
		if (j != size - 1)
			res = ft_strcat(res, sep);
		j++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		total_len;

	if (size == 0)
		return (malloc(1));
	total_len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	res = helper(size, total_len, strs, sep);
	return (res);
}
