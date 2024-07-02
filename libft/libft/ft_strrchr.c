/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:57:33 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/23 10:50:04 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	int		cha;
	char	*p;

	cha = 0;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			p = "0";
			break ;
		}
		else
			p = NULL;
		len--;
		cha++;
	}
	if (p == NULL)
		return (NULL);
	return ((char *)&s[len]);
}
/*
int	main(int ac, char **av)
{
	char	*ok;

	ok = av[1];
	printf("%s\n", ft_strrchr(ok, '\0'));
	printf("%s", strrchr(av[1], '\0'));
}/*/
