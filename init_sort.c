/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:25:23 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/20 22:57:44 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_rank(t_stacks **stack_a)
{
	t_stacks	*tsnext;
	t_stacks	*tempo;

	tempo = *stack_a;
	while (tempo)
	{
		tsnext = tempo->next;
		while (tsnext)
		{
			if (tempo->value > tsnext->value)
				tempo->rank += 1;
			if (tempo->value < tsnext->value)
				tsnext->rank += 1;
			tsnext = tsnext->next;
		}
		tempo = tempo->next;
	}
}

t_stacks	*find_last(t_stacks **stack_a)
{
	t_stacks	*tempo;
	t_stacks	*last;

	tempo = *stack_a;
	while (tempo)
	{
		if (tempo->next == NULL)
			last = tempo;
		tempo = tempo->next;
	}
	return (last);
}

void	find_small(t_stacks **stack_a)
{
	t_stacks	*tempo;
	int			small;
	int			index;
	int			i;

	index = 0;
	i = -1;
	small = (*stack_a)->value;
	tempo = *stack_a;
	while (tempo && ++i < stack_len(stack_a))
	{
		if (small > tempo->value)
		{
			small = tempo->value;
			index = i;
		}
		tempo = tempo->next;
	}
	if (index >= stack_len(stack_a) / 2)
		while (index++ != stack_len(stack_a))
			rra(stack_a);
	else
		while (index-- != 0)
			ra(stack_a);
}
