#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int i;

	i = 0;
	while(i < size/2)
	{
		
		tmp = tab[i];
		tab[i] = tab[size-1];
		tab[size-1] = tmp;
		size--;
		i++;
		

	}
}

void main(void)
{
	int v[] ={1, 2, 3, 4, 5, 6, 7, 8 };
	int i;

	i=0;
	while (i < 8)
	{
	printf("%d", v[i]);
	i++;
	}
	ft_rev_int_tab(v, 8);
	i = 0;
	while (i < 8)
	{
	printf("%d", v[i]);
	i++;
	}



}