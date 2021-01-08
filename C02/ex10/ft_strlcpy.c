#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

void main(void)
{
	char s[] = "arcobaleno 990 uj in i....	b";
	char d[] = "le stelle sono tante";

	printf("%s\n", s);
	printf("%s\n", d);
	ft_strlcpy(d, s, );
	printf("%s\n", s);
	printf("%s\n", d);
}