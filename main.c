/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 23:24:47 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/20 23:24:47 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stack_a;
	t_stacks	*stack_b;
	int			i;

	i = 0;
	stack_a = NULL;
	if (parser(argv, argc, &stack_a) == NULL)
		return (write(1, "Error\n", 6));
	stack_b = NULL;
	get_rank(&stack_a);
	find_algo(&stack_a, &stack_b, i);
	free_all(&stack_a, &stack_b, NULL);
	return (0);
}
