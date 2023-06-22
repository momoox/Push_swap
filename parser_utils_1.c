/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/05/02 17:33:23 by mgeisler          #+#    #+#             */
/*   Updated: 2023/05/02 17:33:23 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*errorexit(t_stacks **stack_a)
{
	t_stacks	*temp;
	t_stacks	*temp2;

	temp = *stack_a;
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	return (NULL);
}

t_stacks	*doublenum(t_stacks **stack_a)
{
	t_stacks	*temp;
	t_stacks	*temp2;
	int			test;

	temp = *stack_a;
	while (temp != NULL)
	{
		test = temp->value;
		temp = temp->next;
		temp2 = temp;
		while (temp2 != NULL)
		{
			if (temp2->value == test)
				return (NULL);
			temp2 = temp2->next;
		}
	}
	return (*stack_a);
}

int	isanum(char **argv, int *a_error)
{
	int	j;
	int	i;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if ((argv[i][j] == '+' || argv[i][j] == '-'))
				j++;
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (*a_error = 1);
			if (argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			if (argv[i][j] > '0' && argv[i][j] < '9')
				j++;
			else
				return (1);
		}
		j = 0;
		i++;
	}
	return (0);
}

int	ft_strchr(char **argv, int *free_argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] == (char) ' ')
				return (*free_argv = 1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

int	ft_atoi(char *str, int *a_error)
{
	int		i;
	int		n;
	long	nb;

	i = 0;
	n = 1;
	nb = 0;

	if (zero_checker(str) == 1)
		*a_error = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (*a_error = 1);
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + (str[i++] - '0');
	if (nb > 2147483647 || nb < -2147483648 || str[i] != '\0' || i > 15)
		*a_error = 1;
	return (n * nb);
}
