/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 06:15:29 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/03 06:15:32 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	end_string(char const *s1, char const *set)
{
	int	cont;
	int	tras;

	tras = ft_strlen(s1) - 1;
	cont = 0;
	while (set[cont] != '\0')
	{
		while (s1[tras] == set[cont])
		{
			tras--;
			cont = 0;
		}
		cont++;
	}
	return (tras);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	cont;
	int	conts;
	int	tras;

	cont = 0;
	conts = 0;
	while (set[cont] != '\0')
	{
		while (s1[conts] == set[cont])
		{
			conts++;
			cont = 0;
		}
		cont++;
	}
	tras = end_string(s1, set);
	return (ft_substr(s1, conts, tras - conts + 1));
}

/*
int	main(int ac,char **av)
{
	char *ok;
	ok = ft_strtrim("oooooslavaooos","os");
    ft_putstr_fd(ok,1);
	free(ok);
}/*/