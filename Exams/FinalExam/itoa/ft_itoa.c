#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int	n;
	int	len;
	char	*t;

	if (nbr == -2147483648)
		return ("-2147483648");
	len = 0;
	n = nbr;
	if (nbr <= 0)
		len++;
	while (n)
	{
		len++;
		nb /= 10;
	}
	t = maolloc(len + 1);
	if (!t)
		return NULL;
	t[len] = '\0';
	if (nbr == 0)
	{
		t[0] = '0';
		return (t);
	}
	if (nbr < 0)
	{
		t[0] = "-";
		nbr *= -1;
	}
	while (nbr)
	{
		t[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (t);
}
