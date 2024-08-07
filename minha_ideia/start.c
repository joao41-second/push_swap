/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:12:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/07 11:18:25 by jperpect         ###   ########.fr       */
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
	while (i <=	 len-1)
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


int ft_len_une(int nb)
{	
	char bits[33];
	int i;
	i = -1;
	ft_str_btis(32,nb,bits);
	bits[32]= '\0';
	while (bits[++i] != '\0')
	{
		if(bits[i]=='1')
			return(i);
	}
	return(i);
}

 
void radix( n_status **list_a,n_status **list_b ,int len,n_status *list_loop)
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

	int conta;
	conta = 0;
	while ( ++d != len)
	{
		if(  order(*list_a,0,31-i) == '0')
			ft_pb(list_a,list_b);
		else if (order(*list_a,0,31-i) == '1' )
		{
			ft_ra(list_a,list_b);
			conta++;
		} 	
	}

	if(*list_b != NULL)
	{	
		int change; 
		int dub;
		
		i++;
		change = ulti_node_une(*list_b,i);
		
		b = ft_list_size(*list_b);
		
	
		conta = 0;
		while (--b >= 0)
		{
			if(order(*list_b,0,31-i) == '0')
			{
					ft_rb(list_a,list_b);//}
			}
			else
			{
				ft_pa(list_a,list_b);
			}
		}
		if(  change == INT_MIN-1)
		{
			while (*list_b != NULL)
			{
			ft_pa(list_a,list_b);
			}
			return;
			
		}
		
		if(i == 32)
			return;
		
	}
}




void algorit(n_status **list_a,n_status **list_b ,int len)
{
	int pivot;
	int i ;
	i = -1;
	list_index(list_a,len);
	
	//pivot = set_max(*list_a,len); //set_start_pivot(*list_a,len);
	
		while(comfirm_list(*list_a)== 1 || *list_b != NULL) 
			radix(list_a,list_b,len,*list_a);
		
		
			
		
		
}

