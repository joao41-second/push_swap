/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:29:46 by jperpect          #+#    #+#             */
/*   Updated: 2024/06/18 14:32:46 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;

	copy = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (copy != NULL)
		ft_strlcpy(copy, s, ft_strlen(s) + 1);
	return (copy);
}
/*
int	main(int ac, char **av)
{
    printf("%s\n",ft_strdup(av[1]));
    printf("%s",strdup(av[1]));
}*/