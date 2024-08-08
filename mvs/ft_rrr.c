/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:30:56 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/08 14:18:51 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ruta_ult(t_status **list_a)
{
	t_status	*temp;
	t_status	*ult;

	if (*list_a == NULL)
		return ;
	ult = NULL;
	temp = *list_a;
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			ult = temp;
			temp = temp->previous;
			temp->next = NULL;
			break ;
		}
		temp = temp->next;
	}
	temp = ft_node_start(temp);
	ult->previous = NULL;
	ult->next = temp;
	temp->previous = ult;
	temp = ft_node_start(temp);
	*list_a = temp;
}

void	ft_rra(t_status **list_a, t_status **list_b)
{
	if (ft_list_size(*list_a) != 0)
		ruta_ult(list_a);
	if (list_b)
		;
	ft_printf("rra\n");
}

void	ft_rrb(t_status **list_a, t_status **list_b)
{
	if (ft_list_size(*list_b) != 0)
		ruta_ult(list_b);
	if (list_a)
		;
	ft_printf("rrb\n");
}
