/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:43 by mgeisler          #+#    #+#             */
/*   Updated: 2023/05/02 17:33:43 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include"push_swap.h"

//regarder video sur les listes et structures

//sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
//Ne fait rien s’il n’y en a qu’un ou aucun
void    sa(t_stacks **stack_a)
{
    t_stacks *temp;

    temp = *stack_a->next;
    if (*stack_a)
    {
        if (temp->next)
        {
            ft_swap(&temp->value, &temp->next->value);
        }
    }
}

//sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
//Ne fait rien s’il n’y en a qu’un ou aucun.
void    sb(t_stacks **stack_b)
{
    t_stacks *temp;

    temp = *stack_b->next;
    if (*stack_b)
    {
        if (temp->next)
        {
            ft_swap(&temp->value, &temp->next->value);
        }
    }
}

//ss : sa et sb en même temps.
void    ss(t_stacks **stack_a, t_stacks **stack_b)
{
    sa(stack_a);
    sb(stack_b);
}

//pa (push a) : Prend le premier élément au sommet de b et le met sur a.
//Ne fait rien si b est vide.
void    pa(t_stacks **stack_a, t_stacks **stack_b)
{

}
//pb (push b) : Prend le premier élément au sommet de a et le met sur b.
//Ne fait rien si a est vide.
void    pb(t_stacks **stack_a, t_stacks **stack_b)
{

}

//ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
//Le premier élément devient le dernier.

//rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
//Le premier élément devient le dernier.

//rr : ra et rb en même temps.

//rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
//la pile a. Le dernier élément devient le premier.

//rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
//la pile b. Le dernier élément devient le premier

//rrr : rra et rrb en même temps.
