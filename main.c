#include "push_swap.h"


//remplacer tableau par liste
int main(int argc, char **argv)
{
  t_stacks *s;
	int 	i;

    s = ft_calloc(sizeof(int), (argc - 1));
    if (valid_check(argv, argc, s) == NULL)
		return(0);
	if (s == NULL)
	{
		errorexit(s);
		return (0);
	}
	i = 0;
    while(i < argc - 1)
	{
		printf("%d ", s[i]);
	 	i++;
	}
	printf("\n");
    return (0);
}
