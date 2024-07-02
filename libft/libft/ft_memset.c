/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:36:16 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/10 16:43:15 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	cont;
	char	*o;

	o = (char *)s;
	cont = 0;
	while (cont < n)
	{
		o[cont] = c;
		cont++;
	}
	return (o);
}

/*
int main (int argc, char **argv )
{
	char palavra[10] = "ola menu";
//	palavra += '0';
	char *ok =  ft_memset(palavra,'a',5);
	int a = 0;
	printf("%s",palavra);
}*/
