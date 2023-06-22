/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgeisler <mgeisler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:25:14 by mgeisler          #+#    #+#             */
/*   Updated: 2023/06/20 23:13:16 by mgeisler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd, int *error, int *ptr)
{
	int	a;

	a = 0;
	if (*error != -1)
	{
		a = write(fd, &c, 1);
		(*ptr)++;
	}
	if (a == -1)
		*error = -1;
}
