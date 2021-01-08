#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	i = 0;

	while(s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		if (i == n-1)
			return(s1[i] - s2[i]);
		i++;
	}
	return(s1[i] - s2[i]);
}

int main(void)
{
	char s1[] = "xmxxxx";
	char s2[] = "xaxxxx";
	printf("%d\n", ft_strcmp(s1, s2, 5));
}