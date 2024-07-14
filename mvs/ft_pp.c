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


void ft_start(n_status **list_a,n_status **list_b)
{
	n_status *temp;
	n_status *test;

	if(*list_a == NULL)
		return;

	test = *list_a;
	
	temp = (*list_a)->next;
	if(temp != NULL)
		temp->previous = NULL;
	test->next = NULL;
	test->previous = NULL;
	if(*list_b)
	{

		ft_node_add_inver(list_b,test);
	}
	else
		*list_b = test;	
	
	 
	 *list_a = temp;

	
	

}


void ft_pa(n_status **list_a,n_status **list_b)
{
	*list_a = ft_node_start(*list_a);
	if(*list_b != NULL)
		*list_b = ft_node_start(*list_b);
	ft_start(list_a,list_b);
	ft_printf("pa");
}


void ft_pb(n_status **list_a,n_status **list_b)
{
	if (list_b == NULL)
		return;
 	*list_a = ft_node_start(*list_a);
	if(*list_b != NULL)
		*list_b = ft_node_start(*list_b);
	ft_start(list_b,list_a);
}

