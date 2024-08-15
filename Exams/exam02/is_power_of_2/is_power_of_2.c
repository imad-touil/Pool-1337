/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:58:19 by imatouil          #+#    #+#             */
/*   Updated: 2024/08/07 19:31:31 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int power_of_2 = 1;
	while (power_of_2 < n && power_of_2 < 2147483648)
		power_of_2 *= 2;
	return (n == power_of_2);
}

int	main()
{
	printf("%d\n", is_power_of_2(8));
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(2));
	printf("%d\n", is_power_of_2(9));
}
