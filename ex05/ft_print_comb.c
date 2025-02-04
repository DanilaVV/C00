#include<unistd.h>

void	ft_putch(char c)
{
	write(1, &c, 1);
}

void	ft_putsign(void)
{
	write(1, ", ", 2);	
}

void	ft_putnmb(char c1, char c2, char c3)
{
	ft_putch(c1);
	ft_putch(c2);
	ft_putch(c3);
	ft_putsign();
}

void	ft_print_comb(void)
{
	int		i;
	char	c1;
	char	c2;
	char	c3;

	i = 0;
	while(i < 789)
	{
		c1 = '0' + i / 100;
		c2 = '0' + (i % 100) / 10;
		c3 = '0' + i % 10;
		if (c1 < c2 && c2 < c3)
			ft_putnmb(c1, c2, c3);
		i++;
	}
	write(1, "789\n", 4);
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
