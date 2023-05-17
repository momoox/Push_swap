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

//parser
    if (parser(argv, argc, &stack_a) == NULL)
		return(write(1, "Error\n", 6));
	stack_b = NULL;
//sort(t_stacks **stack_a, t_stacks **stack_b);
//print A avant
	write(1, "avant\n", 6);
	print_list_a(&stack_a);
//print B avant   
	// write(1, "avant\n", 6);
	// print_list_b(&stack_b);
	write(1, "\n", 1);
	rrb(&stack_b);
//print A apres
	write(1, "apres\n", 6);
	print_list_a(&stack_a);
//print B apres
	// write(1, "apres\n", 6);
	// print_list_b(&stack_b);
	write(1, "\n", 1);
    return (0);
}
