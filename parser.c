#include "push_swap.h"


//remplacer tableau par liste
int    *valid_check(char **argv, int argc, t_stacks *s)
{
    int i;
	int a_error;
	int count;

    i = 1;
	a_error = 0;
	count = (argc - 1);
    if (argc == 1)
        return (0);
    if (ft_strchr(argv) == 1)
		argv = ft_split(argv[1], ' ');
    if (isanum(argv, s) == 1)
		return(NULL);
	//i = 1;
	while(argv[++i])
	{
		if (a_error == 1)
			errorexit(s);
		s->stack_a[i - 1] = ft_atoi(argv[i], &a_error);
	}
	if(doublenum(s, count) == 1)
	{
		errorexit(s);
		return(NULL);
	}
    return (s);
}