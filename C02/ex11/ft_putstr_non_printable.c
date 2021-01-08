#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				index;
	unsigned char	current;

	index = 0;
	while (true)
	{
		current = str[index];
		if (current == '\0')
			break ;
		if (!(current >= ' ' && current != 127))
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current / 16]);
			ft_putchar("0123456789abcdef"[current % 16]);
			}
			else
		{
			ft_putchar(current);
			
		}
		index++;
	}
}

void main(void)
{
	char s[] = "ciao\nci\rao";
	ft_putstr_non_printable(s);
}