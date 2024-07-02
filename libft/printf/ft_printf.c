/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:45:49 by jperpect          #+#    #+#             */
/*   Updated: 2024/06/28 14:04:49 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *str, ...);

static int	identifire(char id, va_list args)
{
	if (id == 'c')
		return (ft_putchar_fds(va_arg(args, int), 1));
	else if (id == 's')
		return (ft_putstr_fds(va_arg(args, char *), 1));
	else if (id == 'p')
		return (ft_printp(va_arg(args, unsigned long)));
	else if (id == 'd')
		return (ft_putnbr_base(va_arg(args, int), "0123456789", 0));
	else if (id == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789", 0));
	else if (id == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789", 1));
	else if (id == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned), "0123456789abcdef", 0));
	else if (id == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned), "0123456789ABCDEF", 0));
	else if (id == '%')
		return (ft_putchar_fds('%', 1));
	return (0);
}

static int	conte(int x, int y)
{
	if (x < y)
	{
		return (1);
	}
	return (2);
}

int	ft_printf(const char *str, ...)
{
	int		cont;
	int		add;
	int		i;
	va_list	args;

	add = 0;
	cont = 0;
	i = 0;
	va_start(args, str);
	while (str[cont] != '\0')
	{
		if (str[cont] == '%')
		{
			add = add + identifire(str[cont + 1], args);
			i += conte(ft_strlen(str), cont + 2);
			if ((int)ft_strlen(str) < cont + 2)
				break ;
			cont += 2;
		}
		else
			ft_putchar_fds(str[cont++], 1);
	}
	va_end(args);
	return (cont + add - i);
}
// int main ()
// {
// 	void *ptr = (char *)0x7ffeefbff710; // Exemplo de ponteiro void *

// 	int a = ft_printf("%",'a');
// 		int b = printf("%",'a');
// 	// //ft_putstr_fds(NULL,1);
// 			printf("\n%d a,%d b ",a,b);

// }
