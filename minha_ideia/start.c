/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:12:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/23 18:01:52 by jperpect         ###   ########.fr       */
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
//	ft_printf("%d",len);
	while (i <=	 len)
	{
			set_min(*list_a,i);
			
			i++;
	}
	
}

char order( n_status *list_a,int index,int bin_index)
{
	int i;
	i = 0;
	char bits[33];
	// list_a = ft_node_start(list_a);
	// if (i != index){
	// while (i == index)
	// {
	// 	list_a = list_a->next;
	// 	i++;
	// }}

	ft_str_btis(32,list_a->index,bits);	
	bits[32]= '\0';
	
	return(bits[bin_index]);
	
}

int ulti_node_une( n_status *list_a,int i)
{
	int save;
	save  = INT_MIN-1;
	while (list_a != NULL)
	{
		//ft_printf("que desgrasa %c",order(list_a,0,31-i-1));
		if (order(list_a,0,31-i) == '1') 
			save = list_a->number;
		if(list_a->next == NULL)
			break;
		list_a = list_a->next;
	}
	// ft_printf("%d que merda",save);
	return(save);
}
	





void radix( n_status **list_a,n_status **list_b ,int len,n_status *list_loop)
{
	
	
	static int i = 0;
	int d;
	long int node_sav;
	
	d = -1;

	
	
	node_sav = ulti_node_une(*list_a,i);
	

	
	d = -1;
	while ( ++d != len)
	{
		if(comfirm_list(*list_a)== 0)
			break;
		if(  order(*list_a,0,31-i) == '0')
		{
			//ft_printf("e o zero");
			ft_pb(list_a,list_b);
		}
		else if (order(*list_a,0,31-i) == '1' )
		{
			ft_ra(list_a,list_b);
		} 	
	}
	

	if(*list_b != NULL)
	{
		//ft_printf("podemos restar a lista b");
		while (*list_b != NULL)
		{
			ft_pa(list_a,list_b);
		}
	
		i++;
		if(i == 32)
			return;
		
	}
	
	
	
}

int test(n_status *list_a)
{
	return(list_a->number);
}

void finaliza(n_status **list_a,n_status **list_b,int len)
{
	ft_rra(list_a,list_b);

	int save = test(*list_a) ;	
	int i =0;
		
		// if((*list_a)->index < len/2)
		// {
			ft_ra(list_a,list_b);
			while ( (*list_a)->number< save)
			{
				//ft_printf("%d",save);
				ft_pb(list_a,list_b);
				i++;
			}
			
			ft_rra(list_a,list_b);
			while (*list_b != NULL)
			{
				//ft_printf("%d",save);
				ft_pa(list_a,list_b);
			}
		// }
}

void algorit(n_status **list_a,n_status **list_b ,int len)
{
	int pivot;
	int i ;
	i = -1;
	list_index(list_a,len);
	
	//pivot = set_max(*list_a,len); //set_start_pivot(*list_a,len);
	
		while(comfirm_list(*list_a)== 1) 
			radix(list_a,list_b,len,*list_a);
			list_index(list_a,len);
			finaliza(list_a,list_b,len);
			
			
			
		
		//radix(list_a,list_b,len,*list_a);
		
}

