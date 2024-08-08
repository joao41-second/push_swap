/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:08:16 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/08 14:18:52 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_status **list_a, t_status **list_b)
{
	t_status	*a;
	t_status	*b;
	t_status	*temp;
	int			tmp;

	if (*list_a == NULL)
		return ;
	a = *list_a;
	b = *list_b;
	tmp = a->number;
	temp = a->next;
	if (temp == NULL)
		return ;
	a->number = temp->number;
	temp->number = tmp;
	ft_printf("sa\n");
}

void	ft_sb(t_status **list_a, t_status **list_b)
{
	t_status	*a;
	t_status	*b;
	t_status	*temp;
	int			tmp;

	if (*list_b == NULL)
		return ;
	a = *list_a;
	b = *list_b;
	tmp = b->number;
	temp = b->next;
	if (temp == NULL)
		return ;
	b->number = temp->number;
	temp->number = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_status **list_a, t_status **list_b)
{
	ft_sa(list_a, list_b);
	ft_sb(list_a, list_b);
}
