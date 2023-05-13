/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:23 by mgeisler          #+#    #+#             */
/*   Updated: 2023/05/02 17:33:23 by mgeisler         ###   ########.fr       */
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

t_stacks	*errorexit(t_stacks **first)
{
	t_stacks *temp;
	t_stacks *temp2;
	
	temp = *first;
	while(temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	return(NULL);
}

t_stacks *doublenum(t_stacks **first)
{
	t_stacks *temp;
	t_stacks *temp2;
	int test;

	temp = *first;
	while(temp != NULL)
	{
		test = temp->value;
		temp = temp->next;
		temp2 = temp;
		while(temp2 != NULL)
		{
			if (temp2->value == test)
				return(NULL);
			temp2 = temp2->next;
		}
	}
	return(*first);
}

int isanum(char **argv)
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
				// +1 oui, + 1 non
        	if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			j++;
		}
			j = 0;
        	i++;
    }
	return (0);
}
