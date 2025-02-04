#include<unistd.h>

void	ft_putch(char	c)
{
	write(1, &c, 1);
}

void	ft_printcoma(void)
{
	write(1, ", ", 2);
}

void	ft_printnmb(int i, int j)
{
	ft_putch('0' + i / 10);
	ft_putch('0' + i % 10);
	write(1, " ", 1);
	ft_putch('0' + j / 10);
	ft_putch('0' + j % 10);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i < 99)
	{
		while (j <= 99)
		{
			if (j > i)
			{
				if (i == 98 && j == 99)
					break;
				ft_printnmb(i, j);
				ft_printcoma();	
			}
			j++;
		}
		j = i + 1;
		i++;
	}
	write(1, "98 99\n", 6);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
