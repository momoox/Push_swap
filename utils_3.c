#include "push_swap.h"

void    print_list_a(t_stacks *s)
{
    if(is_empty(s->stack_a) == NULL)
        return ;
    while(s != NULL)
    {
        ft_printf("[%d]\n" s->stack_a);
        s = s->stack_a->next;
    }
    return (0);
}

void    print_list_b(t_stacks *s)
{
    if(is_empty(s->stack_b) == NULL)
        return ;
    while(s != NULL)
    {
        ft_printf("[%d]\n" s->stack_b);
        s = s->stack_b->next;
    }
    return (0);
}
