#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 65 && str[i] <= 90)
			str[i] += 32; 
		i++;
	}
	return (str);
}

void main (void)
{
	char s[] ="ciAo 89IIii9,. 	iXXxo00ppPPxks";
	printf("%s\n",ft_strupcase(s));
}