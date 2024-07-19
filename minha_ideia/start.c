/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:12:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/19 16:21:40 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../push_swap.h"





void radix( n_status **list_a,n_status **list_b ,int len,n_status *list_loop)
{

	int i;
	i = -1;
	int e;
	int ups;
	len = 0;
	//ft_pa(list_a,list_b);
	while (++i <= 2 )
	{

		e = -1;
		while (++e <= 10)
		{
			while (list_loop != NULL)
	
			{
				int a = list_loop->number;

				int frato =;
					a = a / frato;
					if(  a 	== e )
					{	
						ft_pa(list_a,list_b);

					}else
					{
						ft_ra(list_a,list_b);
					}
				
				list_loop = list_loop->next;
			}
			
		}
		
	}
	

}


void algorit(n_status **list_a,n_status **list_b ,int len)
{
	int pivot;
	int i ;
	i = -1;
	
	pivot = set_max(*list_a,len); //set_start_pivot(*list_a,len);
	
	//while(comfirm_list(*list_a)== 1) 
		radix(list_a,list_b,len,*list_a);
}
