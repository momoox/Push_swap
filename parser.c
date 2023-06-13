/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:54:39 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/07 17:54:39 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*parser(char **argv, int argc, t_stacks **stack_a)
{
	int i;
	int a_error;

	i = 1;
	a_error = 0;
	check_argv(argv, argc, &a_error);
	if (a_error == 1)
		return (NULL);
	while (argv[i])
	{
		if (a_error == 1)
			return (errorexit(stack_a));
		lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[i++], &a_error)));
	}
	if (doublenum(stack_a) == NULL)
		return (errorexit(stack_a));
	if (stacksorted(stack_a) == 1)
		exit(1);
	return (*stack_a);
}

char	*check_argv(char **argv, int argc, int *a_error)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc == 1)
		return (0);
	if (ft_strchr(argv) == 1)
		argv = ft_split(argv[1], ' ');
	while (argv[i])
	{
		if (ft_strlen(argv[i]) > 10)
			return (0);
		i++;
	}
	i = 1;
	isanum(argv, a_error);
	if (*a_error == 1)
		return (NULL);
	return (*argv);
}