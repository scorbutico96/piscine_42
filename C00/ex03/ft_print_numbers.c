#include <unistd.h>

void ft_print_numbers(void)
{
	int x;

	x = 0;
	while(x <= 9)
	{
		x += 48;
		write(1, &x, 1);
		x -= 48;
		x++;	
	}
}
