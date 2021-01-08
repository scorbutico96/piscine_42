#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;

	if(str[0] == '\0')
		return (1);

	while(str[i])
	{
		if(!(str[i] <= 57 && str[i] >= 48))
			return(0);
		i++;
	}
	return 1;
}

void main (void)
{
	char s[] ="990";
	printf("%d\n",ft_str_is_numeric(s));
}