
#include <stdio.h>

void	ft_ultimate(int *********nbr)
{
	*********nbr = 412;
}

void main(void)
{
	int a = 10;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	

printf("%d\n", a);

ft_ultimate(&i);

printf("%d\n", a);


}
