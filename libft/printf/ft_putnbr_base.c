/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:46:35 by jperpect          #+#    #+#             */
/*   Updated: 2024/06/28 14:05:58 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nuber(unsigned long nbr, int base, char *b, int len)
{
	long int	temp;

	temp = nbr % base;
	nbr = nbr / base;
	if (nbr >= (unsigned long)base)
	{
		len = nuber(nbr, base, b, len);
	}
	else if (nbr > 0)
	{
		ft_putchar_fds(b[nbr], 1);
		len++;
	}
	ft_putchar_fds(b[temp], 1);
	len++;
	return (len);
}

int	ft_putnbr_base(long nbr, char *base, int neg)
{
	int	len_base;
	int	len;

	len = 0;
	len_base = ft_strlen(base);
	if (nbr < 0 && neg != 1)
	{
		nbr = -(nbr);
		len++;
		ft_putchar_fds('-', 1);
	}
	len = nuber(nbr, len_base, base, len);
	return (len);
}

//  int main(int ac,char** av)
// {
// 	char *base = "0123456789ABCDEF";
// 	char *base_10 = "0123456789";
// 	//int a = ft_putnbr_base(atoi( av[1]),base);
// 	int a = ft_putnbr_base(LONG_MIN,base);
// 	printf("\n %p  ", LONG_MIN, LONG_MAX);
// 	//ft_putnbr_base(a,base_10);
// }