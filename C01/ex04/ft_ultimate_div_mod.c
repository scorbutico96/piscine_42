#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

void main (void)
{
	int a;
	int b;

	a = 27;
	b = 4;

	printf("A : %d\n", a);
	printf("B : %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("A(risultato divisione) : %d\n", a);
	printf("B(resto della divisione) : %d\n", b);

}