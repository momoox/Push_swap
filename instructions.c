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
void    sa(t_stacks **firsta)
{
    t_stacks *temp;

    temp = *first->next;
    if (*first)
    {
        if (temp->next)
        {
            ft_swap(&temp->value, &temp->next->value);
        }
    }
}

//sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
//Ne fait rien s’il n’y en a qu’un ou aucun.
void    sb(t_stacks **firstb)
{
    t_stacks *temp;

    temp = *firstb->next;
    if (*first)
    {
        if (temp->next)
        {
            ft_swap(&temp->value, &temp->next->value);
        }
    }
}

//ss : sa et sb en même temps.
void    ss(t_stacks **firsta, t_stacks **firstb)
{
    sa(firsta);
    sb(firstb);
}

//pa (push a) : Prend le premier élément au sommet de b et le met sur a.
//Ne fait rien si b est vide.
void    pa(t_stacks **first)
{
    
}
//pb (push b) : Prend le premier élément au sommet de a et le met sur b.
//Ne fait rien si a est vide.
void    pb(t_stacks **first)
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
