/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:03:52 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/12 13:09:34 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*t;
	int	jj = end - start;
	int	i = 0;

	if (jj < 0)
		jj *= -1;
	t = malloc(sizeof(int) * (jj));
	if (t == NULL)
		return (NULL);

	while (start >= end && i <= jj)
	{
		t[i] = start;
		i++;
		start--;
	}
	while (start <= end && i <= jj)
    {
        t[i] = start;
        i++;
        start++;
    }


	return (t);
}

int	main()
{
	int	tab[10] = {1, 2,3,4,5,6,7,8,9,10};
	int	*tt = ft_range(0, -3);
	int	i = 0;
	while (i <= 3)
	{
		printf("%d ", tt[i]);
		i++;
	}
}
