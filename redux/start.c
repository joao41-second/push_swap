/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:12:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/07 17:30:44 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../push_swap.h"

 int set_min(n_status *list , int index)
{
	long int min;
	
	int i ;
	n_status *save_min = list;
	
	i = -1;
	min = (long int)INT_MAX+1;

	
	while(list != NULL)
	{
			if (min > list->number && list->index == (long int)INT_MAX+1)
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
		list->index = (long int)INT_MAX+1;
		list = list->next;	
	}
	list->index =(long int)INT_MAX+1;
	
}

void list_index(n_status **list_a,int len)
{
	list_index_max_int(*list_a);
	int i;
	i = 0;
	while (i <=	 len-1)
	{
			set_min(*list_a,i);
			i++;
	}
	
}

char order( n_status *list_a,int bin_index)
{
	int i;
	i = 0;
	char bits[33];


	ft_str_btis(32,list_a->index,bits);	
	bits[32]= '\0';
	
	return(bits[bin_index]);
	
}
long int ulti_node_une( n_status *list_a,int i)
{
	long int save;
	save  = (long int)INT_MIN-1;
	while (list_a != NULL)
	{
		if (order(list_a,31-i) == '1') 
			save = list_a->number;
		if(list_a->next == NULL)
			break;
		list_a = list_a->next;
	}
	return(save);
}



 
void radix( n_status **list_a,n_status **list_b ,int len)
{
	static int i = 0;
	int d;
	int  b ;
	long int node_sav;
	int new_len;
	
	d = -1;
	b = 0;
	new_len =  len;	
	node_sav = ulti_node_une(*list_a,i-1);
	len = ft_list_size(*list_a);
	d = -1;

	while ( ++d != len)
	{
		if(  order(*list_a,31-i) == '0')
			ft_pb(list_a,list_b);
		else if (order(*list_a,31-i) == '1' )
		{
			ft_ra(list_a,list_b);
		} 	
	}
	if(*list_b != NULL)
	{	
		long int change; 
		i++;
		change = ulti_node_une(*list_b,i);
		
		b = ft_list_size(*list_b);
	
		while (--b >= 0)
		{
			if(order(*list_b,31-i) == '0')
			{
					ft_rb(list_a,list_b);//}
			}
			else
			{
				ft_pa(list_a,list_b);
			}
		}
		if( change == (long int )INT_MIN-1)
		{
			while (*list_b != NULL)
			{
			ft_pa(list_a,list_b);
			}
		}
		if(i == 32)
			return;
	}
}


void algorit(n_status **list_a,n_status **list_b ,int len)
{
	
		list_index(list_a,len);
		if(len == 3 )
		{
			while(comfirm_list(*list_a)== 1 ) 
				three(list_a,list_b);
			//ft_print_list(*list_a,*list_b);
			return;
		}
		if(len  <= 5 )
		{
			five(list_a,list_b, len);	
			//ft_print_list(*list_a,*list_b);
			return;
		}
		while(comfirm_list(*list_a)== 1 || *list_b != NULL) 
			radix(list_a,list_b,len);
		
}

