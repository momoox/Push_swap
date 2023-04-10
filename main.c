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
	int	i;
	int	n;
	int	nb;

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
		nb = nb * 10 + (str[i++] - '0');
	return (n * nb);
}

int doublenum(int *list, int count)
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

int isanum(char **argv, int *list)
{
	int j;
	int i;

	i = 1;
	j = 0;
	while(argv[i])
    {
		while(argv[i][j])
		{
        	if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				free(list);
            	return (1);
			}
			j++;
		}
			j = 0;
        	i++;
    }
	return (0);
}

int    *valid_check(char **argv, int argc, int *list)
{
    int i;
	int count;

    i = 1;
	count = (argc - 1);
    if (argc == 1)
        return (0);
    isanum(argv, list);
	i = 1;
	while(argv[i])
	{
    	list[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	//doublenum(argv, argc);
	if(doublenum(list, count) == 1)
		return(NULL);
    return (list);
}

int main(int argc, char **argv)
{
    int	*list;
	int i;

	i = 0;
    list = ft_calloc(sizeof(int), (argc - 1));
    list = valid_check(argv, argc, list);
	if (list == NULL)
		return (0);
    while(i < argc - 1)
	{
		printf("%d ", list[i]);
		i++;
	}
    return (0);
}
