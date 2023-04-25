#include "push_swap.h"

int main(int argc, char **argv)
{
    int		*stack_a;
	int 	i;

    stack_a = ft_calloc(sizeof(int), (argc - 1));
    if (valid_check(argv, argc, stack_a) == NULL)
		return(0);
	if (stack_a == NULL)
	{
		errorexit(stack_a);
		return (0);
	}
	i = 0;
    while(i < argc - 1)
	{
		printf("%d ", stack_a[i]);
	 	i++;
	}
	printf("\n");
    return (0);
}
