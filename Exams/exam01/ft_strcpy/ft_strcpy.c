void	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int	main()
{
	char	dest[50] = "Hello";
	char	*src = "imad";
	printf("%s", ft_strcpy(dest, src));
}
