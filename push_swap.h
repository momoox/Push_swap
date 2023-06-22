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

# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef struct list
{
	int				value;
	int				rank;
	struct list		*next;
}					t_stacks;

//ft_calloc
void		ft_bzero(void *s, int len);
void		*ft_calloc(int ecount, int esize);

//main
int			main(int argc, char **argv);

//parser
t_stacks	*parser(char **argv, int argc, t_stacks **stack_a);
char		**check_argv(char **argv, int *a_error, int *i2, int *free_argv);

//parser_utils_1
int			isanum(char **argv, int *a_error);
t_stacks	*doublenum(t_stacks **stack_a);
t_stacks	*errorexit(t_stacks **stack_a);
int			ft_strchr(char **argv, int *free_argv);
int			ft_atoi(char *str, int *a_error);

//utils
void		ft_swap(int *a, int *b);
int			ft_strlen(char *str);
int			stacksorted(t_stacks **stack_a);
int			stack_len(t_stacks **stack_a);
void		free_all(t_stacks **stack_a, t_stacks **stack_b, char **argv);

//utils_2
int			zero_checker(char *str);
// void		free_new(t_stacks *new);

//list_moves
t_stacks	*ft_lstnew(int content);
void		lstadd_front(t_stacks **stack_a, t_stacks *new);
void		lstadd_back(t_stacks **stack_a, t_stacks *new);

//split
char		**ft_split(const char *s, char c);

//instructions
void		sa(t_stacks **stack_a);
void		sb(t_stacks **stack_b);
void		ss(t_stacks **stack_a, t_stacks **stack_b);
void		pa(t_stacks **stack_a, t_stacks **stack_b);
void		pb(t_stacks **stack_a, t_stacks **stack_b);
void		ra(t_stacks **stack_a);
void		rb(t_stacks **stack_b);
void		rr(t_stacks **stack_a, t_stacks **stack_b);
void		rra(t_stacks **stack_a);
void		rrb(t_stacks **stack_b);
void		rrr(t_stacks **stack_a, t_stacks **stack_b);

//init_sort
t_stacks	*find_last(t_stacks **stack_a);
void		get_rank(t_stacks **stack_a);
void		find_small(t_stacks **stack_a);

//sort
void		find_algo(t_stacks **stack_a, t_stacks **stack_b, int i);
void		radix_sort(t_stacks **stack_a, t_stacks **stack_, int i);
void		sort_three(t_stacks **stack_a);
void		sort_five(t_stacks **stack_a, t_stacks **stack_b);

#endif
