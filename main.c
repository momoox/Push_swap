/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:40 by mgeisler          #+#    #+#             */
/*   Updated: 2023/05/02 17:33:40 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
  	t_stacks *stack_a;
	t_stacks *stack_b;
	t_stacks *temp;

	//parser
    if (parser(argv, argc, &stack_a) == NULL)
		return(printf("Error\n"));
	//firstb doit être créée
	stack_b = ft_calloc(1, sizeof(t_stacks));
	//sort
	temp = stack_a;
    while(temp != NULL)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
    return (0);
}
