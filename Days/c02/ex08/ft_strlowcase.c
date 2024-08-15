/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:53:51 by imatouil          #+#    #+#             */
/*   Updated: 2024/07/28 21:56:05 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_char(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_char(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
