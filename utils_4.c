#include "push_swap.h"

t_stacks	*ft_lstnew(int value)
{
	t_stacks *new;

	new = ft_calloc(sizeof(t_stacks), 1);
	if (!new)
		return (NULL);
	new->value = value;
	return(new);
}

void	lstadd_front(t_stacks **first, t_stacks *new)
{
	if (*first == NULL)
		*first = new;
	else
	{
		new->next = *first;
		*first = new;
	}
}

void	lstadd_back(t_stacks **first, t_stacks *new)
{
	t_stacks *tmp;

	if (*first == NULL)
		*first = new;
	else
	{
		tmp = *first;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}