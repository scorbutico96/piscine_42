#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;

	if(str[0] == '\0')
		return (1);

	while(str[i])
	{
		if(!(str[i] <= 90 && str[i] >= 65))
			return(0);
		i++;
	}
	return 1;
}

void main (void)
{
	char s[] ="";
	printf("%d\n",ft_str_is_uppercase(s));
}