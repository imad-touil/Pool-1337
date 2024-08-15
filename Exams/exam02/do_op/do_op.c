#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	s;

	i = 0;
	res = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * s);
}

int	main(int ac, char *av[])
{
	int	i;
	int	r;

	if (ac != 4)
	{
		write(1, "\n", 1);
		return (1);
	}
	if (av[2][0] == '-')
		r = ft_atoi(av[1]) - ft_atoi(av[3]);
	else if (av[2][0] == '*')
		r = ft_atoi(av[1]) * ft_atoi(av[3]);
	else if (av[2][0] == '/')
		r = ft_atoi(av[1]) / ft_atoi(av[3]);
	else if (av[2][0] == '+')
		r = ft_atoi(av[1]) + ft_atoi(av[3]);
	ft_putnbr(r);
}
