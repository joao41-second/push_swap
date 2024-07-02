/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:29:13 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/30 13:29:16 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	cart;

	cart = (unsigned char)c;
	dest = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (dest[i] == cart)
		{
			return (&dest[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	char	*ok;
    int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	//printf("%s", (char *)ft_memchr(tab, -1, 7));
    //printf("%s/n", (char *)memchr(tab, -1, 7));
	//ok = av[1];
  //  printf("%s\n", (char *)memchr(av[1], av[2][0],4));
	//printf("%s", (char *)ft_memchr(ok, av[2][0],4));
	
}*/
