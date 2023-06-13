/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:34:15 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/07 18:46:06 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*ft_lstnew(int content)
{
	t_stacks *new;

	new = (t_stacks *)ft_calloc(sizeof(t_stacks), 1);
	if (!new)
		return (NULL);
	new->value = content;
	new->rank = 0;
	return(new);
}

void	lstadd_front(t_stacks **first, t_stacks *new)
{
	if (*first == NULL)
		*first = new;
	else
	{
		new->next = *first;
		*first = new;
	}
}

void	lstadd_back(t_stacks **first, t_stacks *new)
{
	t_stacks *tmp;

	if (*first == NULL)
		*first = new;
	else
	{
		tmp = *first;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
