/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:11:17 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/22 12:08:08 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[cont] != '\0' && cont < (size - 1))
	{
		dst[cont] = src[cont];
		cont++;
	}
	if (cont < size)
		dst[cont] = '\0';
	while (src[cont] != '\0')
		cont++;
	return (cont);
}

/*
int	main(void)
{
    char des[100];
    char *src = "primeiro";
    ft_strlcpy(des,src,2);
    //strlcpy(des,src,2);
    
    ft_putstr_fd(des,1);

}*/