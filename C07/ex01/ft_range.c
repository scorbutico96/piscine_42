#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int it;
	int	*vt;

	it =  0;
	if ((max - min) > 0)
	{
		vt = malloc(sizeof(*vt) * ((max - min)));
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



int main(void)
{
	int it = 0;
	int min = 2;
	int max = 8;
	int *out ;
	out = ft_range(min, max);
	while (out[it])
	{
		printf("%d\n", out[it]);
		it++;
	}
	return 0;
}