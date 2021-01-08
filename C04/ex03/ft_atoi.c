#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i;
	int c;
	int num;

	i = 0;
	c = 0;
	num = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;

	while(str[i] == 43 || str[i] == 45)
	{
		if(str[i] == 45)
			c++;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if(c % 2 != 0)
		return(num * -1);
	else
		return(num);
}


int main(int argc, char **argv)
{
	char str[] = "	---+--+1234ab567";
	printf("%d \n", ft_atoi(str));
}
