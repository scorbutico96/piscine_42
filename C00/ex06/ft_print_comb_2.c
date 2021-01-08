#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_2(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while(x <= 97)
	{
		y = x + 1;
		while(y <= 99)
		{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			ft_putchar(' ');
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			ft_putchar(' ');
			ft_putchar(',');
			y++;
		}
		x++;
	}
	printf("98 99");
}

int main(void)
{
	ft_print_comb_2();
}