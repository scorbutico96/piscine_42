
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 420;
}

void main(void)
{
	int x;
	int y;
	x = 4;
	y = 200;


	printf("%d\n", x);
	printf("%d\n", y);

	ft_ft(&x);
	ft_ft(&y);

	printf("%d\n", x);
	printf("%d\n", y);
}