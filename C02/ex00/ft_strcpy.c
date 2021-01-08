#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main(void)
{
	char src[] = "gaia e marcello";
	char dest[] = "ma che bel castello    ";
	printf("prima : (src) %s\n", src);
	printf("prima : (dest) %s\n", dest);
	printf("dopo : (src) %s\n", src);
	printf("dopo : (dest) %s\n", ft_strcpy(dest, src));
	return(0);
}