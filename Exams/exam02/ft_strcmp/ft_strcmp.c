int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main()
{
	char *s1 = "ahmad";
	char *s2 = "ahmbd";
	printf("%d\n", ft_strcmp(s1, s2));
}
