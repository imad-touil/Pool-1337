#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*t;

	i = 0;
	t = malloc(ft_strlen(src) + 1);
	if (t == NULL)
		return (0);
	while (src[i])
	{
		t[i] = src[i];
		i++;
	}
	t[i] = '\0';
	return t;
}

#include <stdio.h>

int	main()
{
	char src[] = "imad touil\n";
	printf("%s", ft_strdup(src));
}
