#include "push_swap.h"


//ILS TROUVENT PAS LE " CE CON

int	ft_strchr(char **argv)
{
	int	i;
    int j;

	i = 1;
    j = 0;
	while (argv[i])
	{
		while(argv[i][j])
        {
            if(argv[i][j] == (char)' ')
                return(1);
			j++;
        }
		i++;
        j = 0;
	}
	return (0);
}


int	ft_atoi(char *str, int *a_error)
{
	int		i;
	int		n;
	long	nb;

	i = 0;
	n = 1;
	nb = 0;
	if (str[i] == '-')
	{
		n *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (nb > 2147483647 || nb < -2147483648)
	{
		*a_error = 1;
		return(*a_error);
	}
	return (n * nb);
}
