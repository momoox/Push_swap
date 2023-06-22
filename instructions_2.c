/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:05:21 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/20 23:07:30 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stacks **stack_a)
{
	t_stacks	*temp;
	t_stacks	*temp2;

	temp = *stack_a;
	temp2 = *stack_a;
	if (temp == NULL)
		return ;
	if (temp->next)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = temp2;
		*stack_a = temp2->next;
		temp2->next = NULL;
		ft_printf("ra\n");
	}
	else
		return ;
}

void	rb(t_stacks **stack_b)
{
	t_stacks	*temp;
	t_stacks	*temp2;

	temp = *stack_b;
	temp2 = *stack_b;
	if (temp == NULL)
		return ;
	if (temp->next)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = temp2;
		*stack_b = temp2->next;
		temp2->next = NULL;
		ft_printf("rb\n");
	}
	else
		return ;
}

void	rr(t_stacks **stack_a, t_stacks **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}

void	rra(t_stacks **stack_a)
{
	t_stacks	*tempa;
	t_stacks	*temp2;

	tempa = *stack_a;
	temp2 = *stack_a;
	if (*stack_a == NULL)
		return ;
	if (tempa->next)
	{
		while ((tempa->next)->next)
		{
			tempa = tempa->next;
		}
		*stack_a = tempa->next;
		(*stack_a)->next = temp2;
		tempa->next = NULL;
		ft_printf("rra\n");
	}
	else
		return ;
}

void	rrb(t_stacks **stack_b)
{
	t_stacks	*tempb;
	t_stacks	*temp2;

	tempb = *stack_b;
	temp2 = *stack_b;
	if (*stack_b == NULL)
		return ;
	if (tempb->next)
	{
		while ((tempb->next)->next)
		{
			tempb = tempb->next;
		}
		*stack_b = tempb->next;
		(*stack_b)->next = temp2;
		tempb->next = NULL;
		ft_printf("rrb\n");
	}
	else
		return ;
}
