/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:08:16 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/18 15:08:47 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_sa(n_status **list_a,n_status **list_b)
{
	n_status *a;
	n_status *b;
	n_status *temp;
	int tmp;
	
	if(*list_a == NULL)
		return;
	
	a = *list_a;
	b = *list_b;
	tmp = a->number;
	temp = a->next;
	if(temp == NULL)
		return;
	
	a->number = temp->number;
	temp->number = tmp;
	 ft_printf("sa\n");
}

void ft_sb(n_status **list_a,n_status **list_b)
{
	n_status *a;
	n_status *b;
	n_status *temp;
	int tmp;
	if(*list_b == NULL)
		return;
	
	a = *list_a;
	b = *list_b;
	tmp = b->number;
	temp = b->next;
	if(temp == NULL)
		return;
	
	 b->number = temp->number;
	 temp->number = tmp;
	 ft_printf("sb\n");
	
}


void ft_ss(n_status **list_a,n_status **list_b)
{
	ft_sa(list_a,list_b);
	ft_sb(list_a,list_b);
}