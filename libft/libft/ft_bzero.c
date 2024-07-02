/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:51:56 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/30 12:41:35 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	cont;
	char	*str;

	cont = 0;
	str = (char *)s;
	while (cont < n)
	{
		str[cont] = '\0';
		cont++;
	}
}

/*
int main (void)
{
	char ok[1000] = "vai a merdasdajflkjdl;skfjskladj";
	int com = 154656465;
	char *o;
	ft_bzero(ok, 5);
	write(1,&ok[5],1);
	

}*/
