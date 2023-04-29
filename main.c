#include "push_swap.h"


//remplacer tableau par liste
int main(int argc, char **argv)
{
  t_stacks *s;
	int 	i;

    list = ft_calloc(sizeof(int), (argc - 1));
    if (valid_check(argv, argc, list) == NULL)
		return(0);
	if (list == NULL)
	{
		errorexit(list);
		return (0);
	}
	i = 0;
    while(i < argc - 1)
	{
		printf("%d ", list[i]);
	 	i++;
	}
	printf("\n");
    return (0);
}
