#include <string.h>
#include <stdio.h>



char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while(dest[i])
	{
		i++;
	}
	while(j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return(dest);
}

int main(void)
{
	char s1[100] = ".  .		0marcello		.";
	char s2[] = "xXxhh. .. gaia";
	printf("%s\n", ft_strncat(s1, s2, 3));
}