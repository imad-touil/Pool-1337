/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 20:46:44 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/12 12:46:42 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*t;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	t = (int *)malloc(sizeof(int) * size);
	if (t == NULL)
		return (NULL);
	while (i < size)
	{
		t[i] = min;
		min++;
		i++;
	}
	return (t);
}
