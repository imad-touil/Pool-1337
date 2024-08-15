/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 15:55:01 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/12 13:00:17 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}
