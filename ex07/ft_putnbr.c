#include<unistd.h>
#include<stdio.h>

void	ft_putch(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write (1, "-", 1);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putch('0' + nb);
	}
}

int	main(void)
{
ft_putnbr(-2147483648);
puts("");
ft_putnbr(2147483647);
puts("");
ft_putnbr(-21474);
puts("");
ft_putnbr(2);
puts("");
ft_putnbr(0);
}
