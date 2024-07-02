/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 06:15:19 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/03 06:16:10 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	while_return(const char *big, const char *little, size_t save)
{
	size_t	id;
	size_t	set;

	id = 0;
	set = 0;
	while (id < ft_strlen(little))
	{
		if (big[save] != little[id])
		{
			set = 1;
			break ;
		}
		save++;
		id++;
	}
	return (set);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	set;
	char	*ok;

	if (!little[0])
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			set = while_return(big, little, i);
			if (set == 0 && len - i >= ft_strlen(little))
			{
				ok = (char *)big;
				return (&ok[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
		char *ok = strnstr(av[1], av[2], 0);
		printf("%s/n",ok );
	//printf("%s\n", strnstr(av[1], av[2], 0));
	printf("%s", ft_strnstr(av[1], av[2], 0));
}*/