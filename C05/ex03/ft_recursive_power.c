#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb != 0)
		return 0;
	else if (nb == 0 && power == 0)
		return 1;
	if (power == 1)
		return nb;
	else if (power >= 2)
		return nb * ft_recursive_power(nb , power - 1);
}
int main (void)
{
	printf("%d\n", ft_recursive_power(8,2));
	return (0);
}