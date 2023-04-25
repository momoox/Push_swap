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

void	errorexit(int *list)
{
	free(list);
	printf("Error\n");
}

int doublenum(int *stack_a, int count)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(i < count)
	{
		while(j < count)
		{
			if(stack_a[i] == stack_a[j])
				return(1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int isanum(char **argv, int *stack_a)
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
            	errorexit(stack_a);
				return (1);
			}
			j++;
		}
			j = 0;
        	i++;
    }
	return (0);
}

//gerer les guillemets