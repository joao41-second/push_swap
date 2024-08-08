/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:13:13 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/08 14:13:17 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	v_nb(long int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

static long int	sinals(long int n, long int sinal)
{
	if (sinal == 0)
		return (-n);
	return (n);
}

static long int	r_nb(long int sinal, long int cont, const char *nptr,
		long int arit)
{
	long int	n;

	n = 0;
	if (sinal > 1)
		return (0);
	while (v_nb(nptr[cont]) == 1)
	{
		n = n * 10 + (nptr[cont] - '0');
		cont++;
	}
	if ((nptr[cont] + '0') != '0')
		return (0);
	return (sinals(n, arit));
}

long int	ft_atol(const char *nptr)
{
	long int	cont;
	long int	arit;
	long int	sinal;

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
// long int	main(long int ac, char **av)
// {
// 	prlong intf("%d\n", atoi("	1"));
// 	prlong intf("%d", ft_atoi("	4"));
// }