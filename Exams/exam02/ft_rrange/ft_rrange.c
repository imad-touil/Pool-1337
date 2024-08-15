/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:07:59 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/08 14:16:49 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*t;
	int	i;
	int	size;

	size = end - start;
	t = malloc(sizeof(int) * size);
	i = 0;
	if (t == NULL)
		return (NULL);
	while (i <= size)
	{
		t[i] = end;
		end--;
		i++;
	}
	return (t);
}

int	main()
{
	int	tab[10] = {1, 2,3,4,5,6,7,8,9,10};
	int	*tt = ft_rrange(5, 10);
	int	i = 0;
	while (i <= 5)
	{
		printf("%d ", tt[i]);
		i++;
	}
}
