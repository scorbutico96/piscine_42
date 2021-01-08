
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	tmp = 0;
	i = 0;
	while(i < size)
	{
		j = i+1;
		while(j < size)
		{
			if(tab[j] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}

			j++;
		}

		i++;
	}

}

void main(void)
{
	int v[] = {3,4,2,2,3,4,7,7,5,4,3,2,2,2,1,-1,-3,-9,-9,9,7,-6,-5,6,7,3,8,1,1,9};
	int size;
	int i;

	size = 30;
	i=0;
	while (i < size)
	{
	printf("%d", v[i]);
	i++;
	}
	printf("\n");
	ft_sort_int_tab(v, size);
	i=0;
	while (i < size)
	{
	printf("%d", v[i]);
	i++;
	}

}