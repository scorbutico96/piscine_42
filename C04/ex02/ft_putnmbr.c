#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1,"-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb > 9)
		ft_putnbr(nb /10);
	ft_putchar(48 + nb % 10);
}

int		main(void)
{
	ft_putnbr(130);
}