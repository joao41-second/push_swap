/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   updat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:57:43 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/19 13:50:05 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int seahct_list(n_status *list,int index)
{
	int i;
	i = -1;
	while (++i == index)
	{
		list=list->next;
	}
	return(list->number);	
}	



int ft_pa_loop_otimiz(int loop,n_status **list_a,n_status ** list_b)
{
	int i ;
	int not_muv;
	i = -1;
	not_muv = seahct_list(*list_a,loop);
	
	while(++i <= loop)
	{
		ft_pa(list_a,list_b);
		//ft_printf();
		
	}

	ft_print_list(*list_a,*list_b);
	ft_printf("estou a procura de %d",not_muv);
	
	return(i);
}