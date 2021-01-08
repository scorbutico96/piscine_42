#include <stdio.h>


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

void main(void)
{
	char s[] = "n		b";
	printf("%d", ft_strlen(s));
}