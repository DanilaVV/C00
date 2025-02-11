#include<unistd.h>

void	ft_putch(char c)
{
	write(1, &c, 1);
}

void	ft_putcoma(void)
{
	write(1, ", ", 2);
}

int	ft_max(int n)
{
	int	res;
	res = 1;
	while(n > 0)
	{
		res *= 10;
		n--;
	}
	return (res);
}

void	ft_print_combn(int n)
{
	int	i;
	int	n_clone;
	int	d1;
	int	d2;

	i = 1;
	max = ft_max(n) / 10;
	while(i < ft_max(n))
	{
		while(max > 0)
		{
			d1 = i / max;
			d2 = (i / (max/10))%10;
		}
	}
}
