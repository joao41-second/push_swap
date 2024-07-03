/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:56:19 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/03 16:05:29 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_pa(n_status **list_a,n_status **list_b)
{
	n_status *a;
	n_status *b;
	n_status *temp;
	
	a = *list_a;
	b = *list_b;
	if(b == NULL)
		return;
	
}

void ft_pb(n_status **list_a,n_status **list_b)
{
	n_status *a;

	
	a = *list_a;
	*list_a = (*list_a)->next;
	if(*list_a)
		(*list_a)->previous = NULL;

	if (*list_a == NULL)
		return;
	if (*list_b == NULL)
	{
		  *list_b = a;
		  (*list_b)->previous = NULL;
		  (*list_b)->next = NULL;
	}
	else
	{
		a->next = NULL;
		a->previous = NULL;
		ft_node_add_front(list_b,a);
	}
}
