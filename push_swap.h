/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:34:18 by mgeisler          #+#    #+#             */
/*   Updated: 2023/05/02 17:34:18 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>


typedef struct list
{
    int value;
    struct list *next;
}   t_stacks;
//se renseigner sur les structures de contrôle (pas besoin peut etre)

//main
int main(int argc, char **argv);

//parser
t_stacks    *valid_check(char **argv, int argc, t_stacks **first);

//instructions
// void    sa(t_stacks *s);
// void    sb(t_stacks *s);
// void    ss(t_stacks *s);
// void    pa(t_stacks *s);
// void    pb(t_stacks *s);

//utils_1
void	ft_bzero(void *s, int len);
void	*ft_calloc(int ecount, int esize);
int 	isanum(char **argv);
t_stacks *doublenum(t_stacks **first);
t_stacks*    errorexit(t_stacks **first);

//utils_2
int	    ft_strchr(char **argv);
int	 	ft_atoi(char *str, int *a_error);
void	ft_swap(int *a, int *b);
int     is_empty(t_stacks *first);
int	    stack_len(t_stacks *first);

//utils_3
//void    print_list_a(t_stacks *s);
//void    print_list_b(t_stacks *s);

//utils_4
t_stacks	*ft_lstnew(int value);
void	lstadd_front(t_stacks **first, t_stacks *new);
void	lstadd_back(t_stacks **first, t_stacks *new);

//split
char	**ft_split(char *s, char c);
char	**freeall(char **tab);
char	*cpyword(char *s, int *i, char c, int len);
int	    lenword(char *s, int i, char c);
int	    count(char *s, char c);

#endif
