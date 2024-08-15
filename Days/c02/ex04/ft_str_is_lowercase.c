/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:11:17 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/28 20:25:00 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
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
