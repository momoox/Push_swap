/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:25:23 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/11 18:46:10 by mgeisler         ###   ########.fr       */
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

void	radix_sort(t_stacks **stack_a, t_stacks **stack_b, int i)
{
	t_stacks	*tempo;
	t_stacks	*onepiece;
	t_stacks	*last;

	onepiece = *stack_a;
	last = find_last(stack_a);
	while(onepiece)
	{
		tempo = onepiece;
		onepiece = onepiece->next;

		if (tempo->rank >> i & 1)
			ra(stack_a);
		else

			pb(stack_a, stack_b);
		if (tempo == last)
			break ;
	}
	while (*stack_b)
		pa(stack_a, stack_b);
}
