/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:29:07 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/30 13:27:42 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*nuber(int cont, int r, char *ret)
{
	int		rest;
	char	temp;

	while (0 <= cont)
	{
		rest = r % 10;
		temp = rest + '0';
		ret[cont] = temp;
		r = r / 10;
		cont--;
	}
	return (ret);
}

static int	conta(int n, int cont)
{
	if (n == 0)
		return (1);
	while (n > 0)
	{
		cont++;
		n = n / 10;
	}
	return (cont);
}

static char	*lines(int n, char *ret, int neg, int cont)
{
	if (-(n) == -2147483648)
	{
		ft_strlcpy(ret, "-2147483648", 12);
		return (ret);
	}
	ret = nuber(cont - 1, n, ret);
	if (neg == 1)
	{
		ret[0] = '-';
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		cont;
	int		neg;
	char	*ret;

	cont = 0;
	neg = 0;
	if (n < 0)
	{
		cont = 1;
		if (n == -2147483648)
			cont = 11;
		n = -(n);
		neg = 1;
	}
	cont = conta(n, cont);
	ret = (char *)malloc((cont + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[cont] = '\0';
	if (cont == 1)
		cont = 1;
	return (lines(n, ret, neg, cont));
}

// int	main(int ac, char **av)
// {
// 	char *ok;
// 	ok =ft_itoa(-2147483648);
// 	printf("%s",ok);
// 	free(ok);
// }
