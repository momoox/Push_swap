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


//remplacer tableau par liste
int main(int argc, char **argv)
{
  	t_stacks *first;
	t_stacks *temp;
	int 	i;

    if (valid_check(argv, argc, &first) == NULL)
		return(printf("Error\n"));
	i = 0;
	temp = first;
    while(temp != NULL)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
    return (0);
}
