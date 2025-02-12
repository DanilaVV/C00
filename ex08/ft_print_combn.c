#include<unistd.h>
#include<stdio.h>

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

int	indicate(int n)
{
	int	nb;

	nb = n % 10;
	if(n/10 == 0 && n!=0)
		return(0);
	while(n != 0)
	{
	n/=10;
	if(nb <= (n%10))
		return (1);
	nb = n % 10;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	nb;

	i = 1;
	while(i < ft_max(n))
	{
		nb = ft_max(n) / 10;
		if (!indicate(i))
		{
			j = i;
			while(nb)
			{
				ft_putch('0'+j/nb);
				if(j/nb != 0)
					j = j - (j / nb) * nb;
				nb /= 10;
			}
			if(i / (ft_max(n) / 10) == 10 - n && (i % 10 == 9))
				break;
			ft_putcoma();
		}
		i++;
	}
}

int	main(void)
{
	ft_print_combn(3);
	return(0);
}
