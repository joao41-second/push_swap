/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:50:10 by jperpect          #+#    #+#             */
/*   Updated: 2024/06/28 14:32:34 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fds(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		ft_putchar_fds(*s, fd);
		s++;
		i++;
	}
	return (i);
}
/*
int	main(int ac , char **av)
{
    ft_putstr_fds(av[1],1);
}*/