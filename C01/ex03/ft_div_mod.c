
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

void main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 33;
	b = 2;
	div = 57 ;
	mod = -23;

	ft_div_mod(a, b, &div, &mod);

	printf("risultato della divisione : %d\n", div);
	printf("resto della dividione : %d\n", mod);


}