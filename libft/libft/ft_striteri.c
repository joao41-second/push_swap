/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:14:13 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/18 09:35:56 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	zb(unsigned int n,char *s)
{
    if (s[n] >= 'a' && s[n] <= 'z')
    s[n] -=32;
}


int	main(int ac,char **av)
{
    char *ok = av[1];
    ft_striteri(ok,zb);
    print(ok);
}*/