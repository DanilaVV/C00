#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	res;

	res = 'a';
	while(res <= 'z')
	{
		write(1, &res, 1);
		res++;
	}
}
/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
