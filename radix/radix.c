/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:57:38 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/12 14:53:10 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	inverted_radix(t_status **list_a, t_status **list_b, int i)
{
	long int	change;
	int			b;

	b = 0;
	if (*list_b != NULL)
	{
		i++;
		change = ulti_node_une(*list_b, i);
		b = ft_list_size(*list_b);
		while (--b >= 0)
		{
			if (order(*list_b, 31 - i) == '0')
				ft_rb(list_a, list_b);
			else
				ft_pa(list_a, list_b);
		}
		if (change == (long int)INT_MIN - 1)
		{
			while (*list_b != NULL)
				ft_pa(list_a, list_b);
		}
		if (i == 32)
			return (i);
	}
	return (i);
}

void	radix(t_status **list_a, t_status **list_b, int len)
{
	static int	i = 0;
	int			d;
	long int	node_sav;
	int			new_len;

	new_len = len;
	node_sav = ulti_node_une(*list_a, i - 1);
	len = ft_list_size(*list_a);
	d = -1;
	while (++d != len)
	{
		if (order(*list_a, 31 - i) == '0')
			ft_pb(list_a, list_b);
		else if (order(*list_a, 31 - i) == '1')
			ft_ra(list_a, list_b);
	}
	i = inverted_radix(list_a, list_b, i);
}

void	algorit(t_status **list_a, t_status **list_b, int len)
{
	list_index(list_a, len);
	if (len == 3)
	{
		while (comfirm_list(*list_a) == 1)
			three(list_a, list_b);
		return ;
	}
	if (len <= 5)
	{
		if (comfirm_list(*list_a) == 1)
			five(list_a, list_b, len);
		return ;
	}
	while (comfirm_list(*list_a) == 1 || *list_b != NULL)
		radix(list_a, list_b, len);
}
