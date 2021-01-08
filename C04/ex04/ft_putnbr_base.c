#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (2);
		j = i+1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (3);
			j++;
		}
		i++;
	}
	return (0);
}


void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_check_base(base) != 0)
	{
		printf("base errata cod. errore : %d\n", ft_check_base(base));
		return;
	}
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / ft_strlen(base), base);
		ft_putchar(base[nbr % ft_strlen(base)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > ft_strlen(base) -1)
		ft_putnbr_base(nbr / ft_strlen(base), base);
	ft_putchar(base[nbr % ft_strlen(base)]);
}

int		main(void)
{
	char b16[] = "0123456789ABCDEF";
	char b10[] = "0123456789";
	char b8[] = "01234567";
	char b2[] = "01";
	ft_putnbr_base(-2147483648, b16);
}