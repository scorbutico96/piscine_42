#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int tmp;

	i = 1;
	tmp = nb;
	if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * tmp;
		i++;
	}
	return (nb);
}

int main (void)
{
	printf("%d\n", ft_iterative_power(4, 3));
	return (0);
}