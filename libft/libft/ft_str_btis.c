/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_btis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:53:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/22 18:23:05 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_btis(int number_bist, int bits, char *bts)
{
	int	i;

	i = 0;
	while (number_bist-- > 0)
	{
		if (bits & (1 << number_bist))
			bts[i] = '1';
		else
			bts[i] = '0';
		i++;
	}
}

// int main()
// {
// 	char a[8];
// 	ft_str_btis(8,'A',a);
// 	printf("%s",a);
// }
