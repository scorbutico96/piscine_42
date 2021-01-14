#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		*ft_range(int min, int max)
{
	int it;
	int	*vt;

	it =  0;
	if ((max - min) > 0)
	{
		vt = malloc(sizeof(*vt) * ((max - min)+1));
		while (min < max)
		{
			vt[it] = min;
			it++;
			min++;
		}
		vt[it] = '\0';
		return (vt);
	}
	return 0;
}



int		main(void)
{
	int min = 1;
	int max = 8;
	int it;
	it = 0;
	
	while (max - min > it)
	{
		printf("%d\n", ft_range(min, max)[it]);
		it++;
	}
	return (0);
}