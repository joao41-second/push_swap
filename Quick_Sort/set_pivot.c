/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pivot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:51:34 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/19 10:08:31 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int set_start_pivot( n_status *list,int len)
{
	int i ;
	i = -1;
	while(++i != len/2)
	{
		list = list->next;
	}
	return(list->number);
}
int set_start_new_pivot( n_status *list,int len)
{
	int i ;
	i = -1;
	while(++i != len-1)
	{
		list = list->next;
	}
	return(list->number);
}


int set_max(n_status *list,int len)
{
	int max;
	int i ;
	
	i = -1;
	max = list->number;
	while(++i != len-1)
	{
		 list = list->next;
		 	
			if (max < list->number)
			max = list->number;
	}
	return(max);
}



int valid_pivot(n_status *list,int len)
{
	int max;
	int i ;
	i = 0;
	//ft_printf("\033[H\033[J");
	while(set_start_new_pivot(list,len) == set_max(list,len))
	{
		len--;
	}
		return(set_start_new_pivot(list,len));
}


int locat_pivot(int pivot,n_status *list)
{
		int i ;
	i = 0;
	while(list->next != NULL)
	{
		 if(list->number == pivot)
		 	return(i);
		 i++;
		list = list->next;
	}
	return(i);
}




