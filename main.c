/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:59:11 by marvin            #+#    #+#             */
/*   Updated: 2023/04/03 20:59:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *s, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)s;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(int ecount, int esize)
{
	void	*str;

	str = malloc(ecount * esize);
	if (ecount == 0 || esize == 0)
		return (str);
	if (str == 0)
		return (0);
	ft_bzero(str, ecount * esize);
	return (str);
}

int	ft_atoi(char **argv)
{
	long	i;
	long	n;
	long	nb;

	i = 0;
	n = 1;
	nb = 0;
	if (argv[i] == '-')
	{
		n *= -1;
		i++;
	}
	else if (argv[i] == '+')
		i++;
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		nb = nb * 10 + (argv[i] - '0');
		i++;
	}
	return (n * nb);
}

int conversion(char **argv)
{
    int list;
    int count;

    count = 0;
    while(argv)
        count++;
    list = ft_calloc(sizeof(char), count + 1);
    list = ft_atoi(argv);
    return (list);
}

char    valid_check(char **argv)
{
    int list;
    int i;

    i = 0;
    if (!argv)
        return (0);
    while(argv[i])
    {
        if (argv[i] < '0' || argv[i] > '9')
            return ('Error');
        i++;
    }
    list = conversion(argv);
    return (list);
}

int main(int argc, char **argv)
{
    int list;
    (void)argc;

    list = 0;

    valid_check(argv);
    printf("%d", list);
    return (0);
}