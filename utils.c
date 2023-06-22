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

int	stack_len(t_stacks **stack_a)
{
	int			len;
	t_stacks	*s;

	len = 0;
	s = *stack_a;
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

void	free_all(t_stacks **stack_a, t_stacks **stack_b, char **argv)
{
	t_stacks	*tempo;
	int			i;

	i = -1;
	while (stack_a && *stack_a)
	{
		tempo = (*stack_a)->next;
		free(*stack_a);
		*stack_a = tempo;
	}
	while (stack_b && *stack_b)
	{
		tempo = (*stack_b)->next;
		free(*stack_b);
		*stack_b = tempo;
	}
	if (argv)
	{
		while (argv[++i])
			free(argv[i]);
		free(argv);
	}
}
