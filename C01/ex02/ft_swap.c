
#include <stdio.h>

void	ft_swap(int* a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void main(void)
{
	int a;
	int b;

	a = 5;
	b = 19;

	printf("%d\n", a);
	printf("%d\n", b);
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}