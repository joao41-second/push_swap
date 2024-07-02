/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:10:05 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/30 13:04:29 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	co;

	co = 0;
	while (s[co] != '\0')
	{
		if (s[co] == (unsigned char)c)
		{
			return ((char *)&s[co]);
		}
		co++;
	}
	if (s[co] == (unsigned char)c)
		return ((char *)&s[co]);
	return (0);
}

/*

int	main(int ac, char **av)
{
	char	*ok;

	ok = av[1];
	
	printf("%s \n", ft_strchr("okokoo", 0));;
	printf("%s \n", strchr("okokoo", 0));

	return (0);
}/*/
