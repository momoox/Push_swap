/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:35 by mgeisler          #+#    #+#             */
/*   Updated: 2023/05/02 17:33:35 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
//a modifier

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

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

// char : return(NULL);
// int : return(0);
// void : return ;

int	stack_len(t_stacks *s)
{
	int len;

	len = 0;
	if(s == NULL)
		return(len);
	while(s != NULL)
	{
		len++;
		s = s->next;
	}
	return (len);
}