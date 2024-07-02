/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:11:09 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/22 15:02:22 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	des_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	des_len = ft_strlen(dst);
	if (des_len < size - 1 && size > 0)
	{
		while (src[i] != '\0' && des_len + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (des_len >= size)
		des_len = size;
	return (des_len + ft_strlen(src));
}
/*
int	main(void)
{
    char des[11]= "rrrrrr";
    char *src = "lorem";
    char dese[11]= "rrrrrr";
    
    int ok =ft_strlcat(des,src,-1);
    int os = strlcat(dese,src,-1);
    
    ft_putchar_fd('\n',1);
    ft_putstr_fd(des,1);
    ft_putnbr_fd(ok,1);

    
    ft_putchar_fd('\n',1);
    ft_putstr_fd(dese,1);
    ft_putnbr_fd(os,1);

}*/