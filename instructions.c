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

#include"push_swap.h"

//regarder video sur les listes et structures

//sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
//Ne fait rien s’il n’y en a qu’un ou aucun
void    sa(t_stacks **stack_a)
{
    t_stacks *temp;

    if(stack_a == NULL)
        return ;
    temp = *stack_a;
    if (*stack_a)
    {
        if (temp->next)
        {
            ft_swap(&temp->value, &temp->next->value);
        }
        ft_printf("sa\n");
    }
    else
        return ;
}

//sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
//Ne fait rien s’il n’y en a qu’un ou aucun.
void    sb(t_stacks **stack_b)
{
    t_stacks *temp;

    temp = *stack_b;
    if(stack_b == NULL)
           return ;
    temp = temp->next;
    if (*stack_b)
    {
        if (temp->next)
        {
            ft_swap(&temp->value, &temp->next->value);
        }
        ft_printf("sb\n");
    }
    else
        return ;
}

//ss : sa et sb en même temps.
void    ss(t_stacks **stack_a, t_stacks **stack_b)
{
    sa(stack_a);
    sb(stack_b);
    ft_printf("ss\n");
}

//pa (push a) : Prend le premier élément au sommet de b et le met sur a.
//Ne fait rien si b est vide.
void    pa(t_stacks **stack_a, t_stacks **stack_b)
{
    t_stacks *tempa;
    t_stacks *tempb;

    tempa = *stack_a;
    tempb = *stack_b;
    if(tempb)
    {
        *stack_a = *stack_b;
        *stack_b = tempb->next;
        if (tempa == NULL)
            (*stack_a)->next = NULL;
        else
            (*stack_a)->next = tempa;
        ft_printf("pa\n");
    }
    else
        return ;
}
//pb (push b) : Prend le premier élément au sommet de a et le met sur b.
//Ne fait rien si a est vide.
void    pb(t_stacks **stack_a, t_stacks **stack_b)
{
    t_stacks *tempa;
    t_stacks *tempb;

    tempa = *stack_a;
    tempb = *stack_b;
    if(tempa)
    {
        *stack_b = *stack_a;
        *stack_a = tempa->next;
        if (tempb == NULL)
            (*stack_b)->next = NULL;
        else
            (*stack_b)->next = tempb;
        ft_printf("pb\n");
    }
    else
        return ;
}

//ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
//Le premier élément devient le dernier.
void    ra(t_stacks **stack_a)
{
    t_stacks *temp;
    t_stacks *temp2;

    temp = *stack_a;
    temp2 = *stack_a;
    if(temp == NULL)
        return ;
    if(temp->next)
    {
        while(temp->next)
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

//rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
//Le premier élément devient le dernier.
void    rb(t_stacks **stack_b)
{
    t_stacks *temp;
    t_stacks *temp2;

    temp = *stack_b;
    temp2 = *stack_b;
    if(temp == NULL)
        return ;
    if(temp->next)
    {
        while(temp->next)
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

//rr : ra et rb en même temps.
void    rr(t_stacks **stack_a, t_stacks **stack_b)
{
    ra(stack_a);
    rb(stack_b);
    ft_printf("rr\n");
}

//rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
//la pile a. Le dernier élément devient le premier.
void    rra(t_stacks **stack_a)
{
    t_stacks *tempa;
    t_stacks *temp2;

    tempa = *stack_a;
    temp2 = *stack_a;
	if(*stack_a == NULL)
		return ;
    if (tempa->next)
    {
        while ((tempa->next)->next) //le suivant du suivant
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

//rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
//la pile b. Le dernier élément devient le premier
void    rrb(t_stacks **stack_b)
{
    t_stacks *tempb;
    t_stacks *temp2;

    tempb = *stack_b;
    temp2 = *stack_b;
	if(*stack_b == NULL)
		return ;
    if (tempb->next)
    {
        while ((tempb->next)->next) //le suivant du suivant
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

//rrr : rra et rrb en même temps.
void	rrr(t_stacks **stack_a, t_stacks **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
    ft_printf("rrr\n");
}
