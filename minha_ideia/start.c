/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:12:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/22 18:47:09 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../push_swap.h"

int set_min(n_status *list , int index)
{
	int min;
	int i ;
	n_status *save_min = list;
	
	i = -1;
	min = INT_MAX;

	
	while(list != NULL)
	{
			if (min > list->number && list->index == INT_MAX+1)
			{
				min = list->number;
				save_min = list;
			}
			list = list->next;
	
	}
	
	save_min->index= index;
	return(min);
}



void list_index_max_int(n_status *list)
{
	while (list->next != NULL)
	{
		list->index = INT_MAX+1;
		list = list->next;	
	}
	list->index = INT_MAX+1;
	
}

void list_index(n_status **list_a,int len)
{
	list_index_max_int(*list_a);
	int i;
	i = 0;
	ft_printf("%d",len);
	while (i <=	 len)
	{
			set_min(*list_a,i);
			
			i++;
	}
	
}

char order( n_status *list_a,int index,int bin_index)
{
	int i;
	i = -1;
	char bits[33];
	while (++i == index)
	{
		list_a = list_a->next;
	}
	ft_str_btis(32,list_a->index,bits);	
	bits[32]= '\0';
	ft_printf("  %s",bits);
	return(bits[bin_index]);
	
}

void radix( n_status **list_a,n_status **list_b ,int len,n_status *list_loop)
{
	
	list_index(list_a,len);
	int i;
	
	i = -1;
	ft_printf("o binariof %c", order(*list_a,98,32));

	// while (++i <= 32)
	// {
		
	// }
	
	
	
}


void algorit(n_status **list_a,n_status **list_b ,int len)
{
	int pivot;
	int i ;
	i = -1;
	
	//pivot = set_max(*list_a,len); //set_start_pivot(*list_a,len);
	
	//while(comfirm_list(*list_a)== 1) 
		radix(list_a,list_b,len,*list_a);
}

