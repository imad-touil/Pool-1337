#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i;
	int	r;

	i = 0;
	r = 0;
	while (str[i])
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (r);
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int	is_prime(int nbr)
{
	int	i;

	if (nbr <= 1)
		return (0);
	i = 2;
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	int	n;
	int	p;
	int	sum;

	p = 2;
	sum = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	n = ft_atoi(av[1]);
	while (p <= n)
	{
		if (is_prime(p))
			sum += p;
		p++;
	}
	ft_putnbr(sum);
}
