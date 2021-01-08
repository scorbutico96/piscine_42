#include<stdio.h>

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;

	while (a <= 9)
	{
		b =a+1;
		while (b <= 9)
		{
			c = b+1;
			while (c <= 9)
			{
				printf("%d%d%d  ", a, b ,c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
}