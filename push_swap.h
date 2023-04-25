#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>


//main
int main(int argc, char **argv);

//parser
int	    *valid_check(char **argv, int argc, int *stack_a);

//utils_1
void	ft_bzero(void *s, int len);
void	*ft_calloc(int ecount, int esize);
int 	isanum(char **argv, int *stack_a);
int 	doublenum(int *stack_a, int count);
void	errorexit(int *stack_a);

//utils_2
int	    ft_strchr(char **argv);
int	 	ft_atoi(char *str, int *a_error);

//split
char	**ft_split(char *s, char c);
char	**freeall(char **tab);
char	*cpyword(char *s, int *i, char c, int len);
int	    lenword(char *s, int i, char c);
int	    count(char *s, char c);

#endif
