#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int	 	ft_atoi(char *str);
int	    *valid_check(char **argv, int argc, int *list);
void	ft_bzero(void *s, int len);
void	*ft_calloc(int ecount, int esize);

#endif