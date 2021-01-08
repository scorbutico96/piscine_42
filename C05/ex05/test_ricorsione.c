#include <unistd.h>
#include <stdio.h>

int	ft_test(int a, int b)
{
	if(b > 1)
		return a-ft_test(a,b-1);
	return a;
}
int main (void)
{
	printf("%d\n", ft_test(2,3));
	return (0);
}