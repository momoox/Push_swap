#include"push_swap.h"

//regarder video sur les listes et structures

//sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
//Ne fait rien s’il n’y en a qu’un ou aucun
void    sa(t_stacks *s) //pointeur qui sera dans l'algo
{
    if(s->size_a < 2)
        return ;
    ft_swap(&s->stack_a[0], &s->stack_a[1]);
    ft_printf("sa\n");
}

//sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
//Ne fait rien s’il n’y en a qu’un ou aucun.
void    sb(t_stacks *s)
{
    if(s->stack_b < 2)
        return ;
    ft_swap(&s->stack_b[0], &s->stack_b[1]);
    ft_printf("sb\n");
}

//ss : sa et sb en même temps.
void    ss(t_stacks *s)
{
    sa(t_stacks *s);
    sb(t_stacks *s);
    ft_printf("ss\n");
}

//pa (push a) : Prend le premier élément au sommet de b et le met sur a.
//Ne fait rien si b est vide.
void    pa(t_stacks *s)
{
    if(is_empty(s) == NULL)
        return ;
    s->stack_b[0]->next = s->stack_a;
    //pas sur de celle là
}
//pb (push b) : Prend le premier élément au sommet de a et le met sur b.
//Ne fait rien si a est vide.
void    pb(t_stacks *s)
{
    if(is_empty(s) == NULL)
        return ;
    s->stack_a[0]->next = s->stack_b;
    //pas sur de celle là
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
