#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	write(1, str, i);
}

void main(void)
{
	char s[] = "GAI00..  ..00A";
	ft_putstr(s);
}