#include <stdio.h>
#include <string.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{

}

int main(void)
{
	char s1[] = "xel mezzo del csofr femmin di nostra vita mi ritrossvai a fare la figa";
	char s2[] = "figazza";
	
	printf("%d\n", ft_strlcat(s1, s2, 5));
}