#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(!((str[i-1] >= 65 && str[i-1] <= 90) || (str[i-1] >= 97 && str[i-1] <= 122) || (str[i-1] <= 57 && str[i-1] >= 48)) && (str[i] >= 97 && str[i] <=122))
			{
				str[i] -= 32;
				i++;
			}
		else if((str[i] >= 65 && str[i] <= 90) && ((str[i-1] >= 65 && str[i-1] <= 90) || (str[i-1] >= 97 && str[i-1] <= 122) || (str[i-1] <= 57 && str[i-1] >= 48)))
			str[i] += 32;
		i++;
	}	
	return (str);
}

void main (void)
{
	char s[] ="gaiA beve il laTTe";
	printf("%s\n",ft_strcapitalize(s));
}