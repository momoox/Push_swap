/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:53 by mgeisler          #+#    #+#             */
/*   Updated: 2023/05/02 17:33:53 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list_a(t_stacks **stack_a)
{
	t_stacks	*temp;

	temp = *stack_a;
	if (temp == NULL)
		return ;
	while (temp)
	{
		ft_printf("%d ", temp->value);
		temp = temp->next;
	}
	ft_printf("\n");
}

void	print_list_b(t_stacks **stack_b)
{
	t_stacks	*temp;

	temp = *stack_b;
	if (temp == NULL)
		return ;
	while (temp)
	{
		ft_printf("%d ", temp->value);
		temp = temp->next;
	}
	ft_printf("\n");
}
