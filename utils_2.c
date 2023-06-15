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

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// char : return(NULL);
// int : return(0);
// void : return ;

int	stack_len(t_stacks *s)
{
	int	len;

	len = 0;
	if (s == NULL)
		return (len);
	while (s != NULL)
	{
		len++;
		s = s->next;
	}
	return (len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	stacksorted(t_stacks **stack_a)
{
	t_stacks	*temp;

	temp = *stack_a;
	if (temp->next == NULL)
		return (1);
	while (temp->next != NULL && temp->value < temp->next->value)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (1);
	}
	return (0);
}
