#include <unistd.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		nb *= ft_recursive_factorial((nb - 1));
	return nb;


}

int main (void)
{
	printf("%d\n", ft_recursive_factorial(12));
	return (0);
}