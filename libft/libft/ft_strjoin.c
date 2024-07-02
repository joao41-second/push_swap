/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 06:14:43 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/03 06:16:13 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (str != NULL)
	{
		ft_strlcat(str, s1, ft_strlen(s1) + 1);
		ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	}
	return (str);
}
/*
int	main(int ca,char **av)
{
    printf("%s",ft_strjoin(av[1],av[2]));
}
*/