/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/06/07 17:54:39 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/07 17:54:39 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*parser(char **argv, int argc, t_stacks **stack_a)
{
	int	i;
	int	a_error;
	int	free_argv;

	i = 1;
	a_error = 0;
	if (argc == 1)
		return (0);
	argv = check_argv(argv, &a_error, &i, &free_argv);
	if (a_error == 1)
		return (NULL);
	while (argv[i])
	{
		lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[i++], &a_error)));
		if (a_error == 1)
			return (errorexit(stack_a));
	}
	if (free_argv == 1)
		free_all(NULL, NULL, argv);
	if (doublenum(stack_a) == NULL)
		return (errorexit(stack_a));
	if (stacksorted(stack_a) == 1)
		exit(1);
	return (*stack_a);
}

char	**check_argv(char **argv, int *a_error, int *i2, int *free_argv)
{
	if (ft_strchr(argv, free_argv) == 1 && !argv[2])
	{
		argv = ft_split(argv[1], ' ');
		*i2 = 0;
	}
	else
		*free_argv = 0;
	isanum(argv, a_error);
	if (*a_error == 1)
		return (NULL);
	return (argv);
}
