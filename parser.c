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


t_stacks    *valid_check(char **argv, int argc, t_stacks **first)
{
    int i;
	int a_error;
	int count;

    i = 1;
	a_error = 0;
	count = (argc - 1);

    if (argc == 1)
        return (NULL);
    if (ft_strchr(argv) == 1)
		argv = ft_split(argv[1], ' ');
//+ grand ou + petit qu'un long avant atoi = > 10 == error
	//i = 1;
    if (isanum(argv) == 1)
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