/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 22:55:40 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/20 22:56:44 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *s, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(int ecount, int esize)
{
	void	*str;

	str = malloc(ecount * esize);
	if (ecount == 0 || esize == 0)
		return (str);
	if (str == 0)
		return (0);
	ft_bzero(str, ecount * esize);
	return (str);
}
