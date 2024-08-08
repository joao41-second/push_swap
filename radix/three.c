/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:14:06 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/08 14:18:58 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three(t_status **list_a, t_status **list_b)
{
	if ((*list_a)->next->next->index != 2)
		ft_ra(list_a, list_b);
	else if ((*list_a)->next->index != 1)
	{
		ft_sa(list_a, list_b);
	}
}

static void	start(t_status **list_a, t_status **list_b)
{
	while (comfirm_list(*list_a) == 1)
		three(list_a, list_b);
}

void	five(t_status **list_a, t_status **list_b, int len)
{
	int	i;
	int	nb;
	int	d;

	nb = len - 3 - 1;
	i = -1;
	d = 0;
	while (++i < len)
	{
		if ((*list_a)->index == d)
		{
			ft_pb(list_a, list_b);
			if (d < nb)
				i = -1;
			else
				break ;
			d++;
		}
		else
			ft_ra(list_a, list_b);
	}
	list_index(list_a, 3);
	start(list_a, list_b);
	while (--d >= -1)
		ft_pa(list_a, list_b);
}
