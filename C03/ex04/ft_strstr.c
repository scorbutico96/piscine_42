#include <string.h>
#include <unistd.h>
#include <stdio.h>

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find[0] == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == 0)
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}


int main(void)
{
	char s1[] = "xel mezzo del csofr femmin di nostra vita mi ritrossvai a fare la figa";
	char s2[] = "fi";
	
	printf("%s\n", ft_strstr(s1, s2));
}