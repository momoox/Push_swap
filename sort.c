/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:54:19 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/20 23:15:47 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_algo(t_stacks **stack_a, t_stacks **stack_b, int i)
{
	if (stack_len(stack_a) == 2)
		sa(stack_a);
	else if (stack_len(stack_a) == 3)
		sort_three(stack_a);
	else if (stack_len(stack_a) == 5)
		sort_five(stack_a, stack_b);
	else
		while (!stacksorted(stack_a))
			radix_sort(stack_a, stack_b, i++);
}

void	radix_sort(t_stacks **stack_a, t_stacks **stack_b, int i)
{
	t_stacks	*tempo;
	t_stacks	*onepiece;
	t_stacks	*last;

	onepiece = *stack_a;
	last = find_last(stack_a);
	while (onepiece)
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

void	sort_three(t_stacks **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->value;
	second = (*stack_a)->next->value;
	third = (*stack_a)->next->next->value;
	if (first > second && second < third && third > first)
		sa(stack_a);
	else if (first > second && second > third && third < first)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (first > second && second < third && third < first)
		ra(stack_a);
	else if (first < second && second > third && third > first)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first < second && second > third && third < first)
		rra(stack_a);
}

void	sort_five(t_stacks **stack_a, t_stacks **stack_b)
{
	find_small(stack_a);
	pb(stack_a, stack_b);
	find_small(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
