#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

int main(void)
{
	char src[] = "geiaaaaaaaaaa e marcello";
	char dest[] = "ma   .. . . . . .    .     ";
	printf("prima : (src) %s\n", src);
	printf("prima : (dest) %s\n", dest);
	printf("dopo : (src) %s\n", src);
	printf("dopo : (dest) %s\n", ft_strncpy(dest, src, 14));
	return(0);
}