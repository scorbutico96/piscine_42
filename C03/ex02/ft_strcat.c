#include <string.h>
#include <stdio.h>



char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
	{
		i++;
	}
	while(src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return(dest);
}

int main(void)
{
	char s1[100] = "kja   	ms    ";
	char s2[] = "		.w  dad  maria  .		M";
	printf("%s\n", strcat(s1, s2));
}