#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>


typedef struct stacks
{

    int *stack_a;
    int *stack_b;
    int size_a;
    int size_b;
    struct stacks *next;

}   t_stacks;

//main
int main(int argc, char **argv);

//parser
int	    *valid_check(char **argv, int argc, int *list);

//instructions
void    sa(s_stacks *s);
void    sb(t_stacks *s);
void    ss(t_stacks *s);
void    pa(t_stacks *s);
void    pb(t_stacks *s);

//utils_1
void	ft_bzero(void *s, int len);
void	*ft_calloc(int ecount, int esize);
int 	isanum(char **argv, int *list);
int 	doublenum(int *list, int count);
void	errorexit(int *list);

//utils_2
int	    ft_strchr(char **argv);
int	 	ft_atoi(char *str, int *a_error);
void	ft_swap(int *a, int *b);
int     is_empty(t_stacks *s);
int	    stack_len(t_stacks *s)

//utils_3
void    print_list_a(t_stacks *s);
void    print_list_b(t_stacks *s);



//split
char	**ft_split(char *s, char c);
char	**freeall(char **tab);
char	*cpyword(char *s, int *i, char c, int len);
int	    lenword(char *s, int i, char c);
int	    count(char *s, char c);

#endif
