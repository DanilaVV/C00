#include<unistd.h>

void ft_print_numbers(void)
{
	char	nm;

	nm = '0';
	while(nm <= '9')
	{
		write(1, &nm, 1);
		nm++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
