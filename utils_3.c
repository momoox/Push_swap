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

void    print_list_a(t_stacks **stack_a)
{
    t_stacks *temp;

    temp = *stack_a;
    if(temp == NULL)
        return ;
    while(temp)
    {
        printf("%d\n" ,temp->value);
        temp = temp->next;
    }
}

// void    print_list_b(t_stacks *s)
// {
//     if(s->stack_b == NULL)
//         return ;
//     while(s != NULL)
//     {
//         ft_printf("[%d]\n" s->stack_b);
//         s = s->stack_b->next;
//     }
//     return (0);
// }
