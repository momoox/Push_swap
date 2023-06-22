/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:03:17 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/20 23:03:17 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacks **stack_a)
{
	t_stacks	*temp;

	if (stack_a == NULL)
		return ;
	temp = *stack_a;
	if (*stack_a)
	{
		if (temp->next)
		{
			ft_swap(&temp->value, &temp->next->value);
		}
		ft_printf("sa\n");
	}
	else
		return ;
}

void	sb(t_stacks **stack_b)
{
	t_stacks	*temp;

	if (stack_b == NULL)
		return ;
	temp = *stack_b;
	if (*stack_b)
	{
		if (temp->next)
		{
			ft_swap(&temp->value, &temp->next->value);
		}
		ft_printf("sb\n");
	}
	else
		return ;
}

void	ss(t_stacks **stack_a, t_stacks **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}

void	pa(t_stacks **stack_a, t_stacks **stack_b)
{
	t_stacks	*tempa;
	t_stacks	*tempb;

	tempa = *stack_a;
	tempb = *stack_b;
	if (tempb)
	{
		*stack_a = *stack_b;
		*stack_b = tempb->next;
		if (tempa == NULL)
			(*stack_a)->next = NULL;
		else
			(*stack_a)->next = tempa;
		ft_printf("pa\n");
	}
	else
		return ;
}

void	pb(t_stacks **stack_a, t_stacks **stack_b)
{
	t_stacks	*tempa;
	t_stacks	*tempb;

	tempa = *stack_a;
	tempb = *stack_b;
	if (tempa)
	{
		*stack_b = *stack_a;
		*stack_a = tempa->next;
		if (tempb == NULL)
			(*stack_b)->next = NULL;
		else
			(*stack_b)->next = tempb;
		ft_printf("pb\n");
	}
	else
		return ;
}
