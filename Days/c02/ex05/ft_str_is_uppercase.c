/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:23:51 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/28 20:24:33 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
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
