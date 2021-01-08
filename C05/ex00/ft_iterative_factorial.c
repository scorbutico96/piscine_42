#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb-1;
	while (i >= 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

int main (void)
{
	printf("%d\n", ft_iterative_factorial(10));
}