/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:15:45 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/02 16:21:27 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	v_nb(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

static int	sinals(int n, int sinal)
{
	if (sinal == 0)
		return (-n);
	return (n);
}

static int	r_nb(int sinal, int cont, const char *nptr, int arit)
{
	int	n;

	n = 0;
	if (sinal > 1)
		return (0);
	while (v_nb(nptr[cont]) == 1)
	{
		n = n * 10 + (nptr[cont] - '0');
		cont++;
	}
	return (sinals(n, arit));
}

int	ft_atoi(const char *nptr)
{
	int	cont;
	int	arit;
	int	sinal;

	sinal = 0;
	cont = 0;
	arit = 1;
	while (ft_isalnum(nptr[cont]) == 0)
	{
		if (nptr[cont] == '-')
			arit = 0;
		if (nptr[cont] == '-' || nptr[cont] == '+')
		{
			if (ft_isalnum(nptr[cont + 1]) == 0)
				return (0);
			sinal++;
		}
		else if (!(nptr[cont] >= 9 && nptr[cont] <= 13) && !(nptr[cont] == 32))
			return (0);
		cont++;
	}
	return (r_nb(sinal, cont, nptr, arit));
}
/**/
// int	main(int ac, char **av)
// {
// 	printf("%d\n", atoi("	1"));
// 	printf("%d", ft_atoi("	4"));
// }