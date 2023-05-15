/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:33:19 by mgeisler          #+#    #+#             */
/*   Updated: 2023/05/02 17:33:19 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_stacks    *parser(char **argv, int argc, t_stacks **first)
{
    int i;
	int a_error;

    i = 1;
	a_error = 0;
    // if (argc == 1)
    //     return (NULL);
    // if (ft_strchr(argv) == 1)
	// 	argv = ft_split(argv[1], ' ');
	// while(argv[i])
	// {
	// 	if(ft_strlen(argv[i]) > 10)
	// 		return(NULL);
	// 	i++;
	// }
	// i = 1;
    // if (isanum(argv) == 1)
	// 	return(NULL);
	check_argv(argv, argc, &a_error);
	if (a_error == 1)
		return(NULL);
	while(argv[i])
	{
		if (a_error == 1)
			return(errorexit(first));
		lstadd_back(first, ft_lstnew(ft_atoi(argv[i++], &a_error)));
	}
	if(doublenum(first) == NULL)
		return(errorexit(first));
	//check si la chaine est déjà triée (exit 0)
    return (*first);
}

char	*check_argv(char **argv, int argc, int *a_error)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc == 1)
		return(0);
	if (ft_strchr(argv) == 1)
		argv = ft_split(argv[1], ' ');
	while(argv[i])
	{
		if(ft_strlen(argv[i]) > 10)
			return(0);
		i++;
	}
	i = 1;
	isanum(argv, a_error);
	if (*a_error == 1)
		return(NULL);
	return(*argv);
}