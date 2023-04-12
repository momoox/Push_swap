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

int	ft_atoi(char *str)
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
		return(1);
	return (n * nb);
}

void	errorexit(long *list)
{
	char *str;
	int i;

	str = "Error";
	i = 0;
	free(list);
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int doublenum(long *list, int count)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(i < count)
	{
		while(j < count)
		{
			if(list[i] == list[j])
				return(1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int isanum(char **argv, long *list)
{
	int j;
	int i;

	i = 1;
	j = 0;
	while(argv[i])
    {
		while(argv[i][j])
		{
			if (argv[i][j] == '-')
				j++;
        	if (argv[i][j] < '0' || argv[i][j] > '9')
			{
            	errorexit(list);
				return (1);
			}
			j++;
		}
			j = 0;
        	i++;
    }
	return (0);
}

long    *valid_check(char **argv, int argc, long *list)
{
    int i;
	int count;

    i = 1;
	count = (argc - 1);
    if (argc == 1)
        return (0);
    if(isanum(argv, list) == 1)
		return(NULL);
	i = 1;
	while(argv[i])
	{
		if (ft_atoi(argv[i]) == 1)
		{
			errorexit(list);
			return(NULL);
		}
		else
			list[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	if(doublenum(list, count) == 1)
	{
		errorexit(list);
		return(NULL);
	}
    return (list);
}

int main(int argc, char **argv)
{
    long	*list;
	int i;

	i = 0;
    list = ft_calloc(sizeof(int), (argc - 1));
    if (valid_check(argv, argc, list) == NULL)
		return(0);
	if (list == NULL)
	{
		errorexit(list);
		return (0);
	}
    while(i < argc - 1)
	{
		printf("%ld ", list[i]);
		i++;
	}
    return (0);
}
