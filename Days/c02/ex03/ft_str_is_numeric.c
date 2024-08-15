/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:09:59 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/28 19:18:02 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_char(str[i])))
			return (0);
		i++;
	}
	return (1);
}
