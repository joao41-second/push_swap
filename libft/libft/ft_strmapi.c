/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:08:57 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/30 12:31:54 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*st;
	unsigned int	i;

	st = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (st == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		st[i] = f(i, s[i]);
		i++;
	}
	st[i] = '\0';
	return (st);
}
/*
char	rs( unsigned int i,char c)
{
    
    if (c >= 'a' && c <= 'z')
    c -=32;
return(c);
}


int	main(int ac , char **av)
{
    printf("%s",ft_strmapi(av[1],rs));
}
*/
