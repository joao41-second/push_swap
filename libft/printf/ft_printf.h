/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:49:09 by jperpect          #+#    #+#             */
/*   Updated: 2024/06/28 14:02:41 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <aio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *formant, ...);

int		ft_printp(unsigned long int decimal);

int		ft_putnbr_base(long int nbr, char *base, int neg);

int		ft_putchar_fds(char c, int fd);

int		ft_putstr_fds(char *s, int fd);

size_t	ft_strlen(const char *s);

#endif