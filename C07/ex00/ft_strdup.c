#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

char	*ft_strdup(char *src)
{
	int it;
	char *string;

	it = 0;
	string = malloc(sizeof(*string) * (ft_strlen(src) + 1));
	while (it < ft_strlen(src))
	{
		string[it] = src[it];
		it++;
	}
	string[it] = '\0';
	return (string);

}
int main(void)
{
	char *gc = "ciaooo";
	printf("%s\n", ft_strdup(gc));
	return 0;
}