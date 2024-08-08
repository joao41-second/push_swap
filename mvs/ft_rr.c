/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:47:54 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/08 14:18:48 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ruta(t_status **list_a)
{
	t_status	*start;

	if (*list_a == NULL)
		return ;
	if ((*list_a)->next == NULL)
	{
		return ;
	}
	start = (*list_a)->next;
	(*list_a)->next = NULL;
	(*list_a)->previous = NULL;
	start->previous = NULL;
	while (start != NULL)
	{
		if (start->next == NULL)
		{
			(*list_a)->previous = start;
			start->next = *list_a;
			break ;
		}
		start = start->next;
	}
	*list_a = start;
	*list_a = ft_node_start(*list_a);
}

void	ft_ra(t_status **list_a, t_status **list_b)
{
	if (*list_b)
		;
	ruta(list_a);
	ft_printf("ra\n");
}

void	ft_rb(t_status **list_a, t_status **list_b)
{
	if (list_a)
		;
	ruta(list_b);
	ft_printf("rb\n");
}

void	ft_rr(t_status **list_a, t_status **list_b)
{
	if (list_b)
	{
	}
	ruta(list_a);
	ruta(list_a);
	ft_printf("rr\n");
}
