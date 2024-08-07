/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:30:56 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/07 12:59:05 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ruta(n_status** list_a)
{

    if (*list_a == NULL )
        {
		ft_printf("fake");	
		return;
		}
    n_status *start;
    if((*list_a)->next == NULL )
    {
       return;
    }
    start = (*list_a)->next;
    ( *list_a) ->next = NULL;
    (*list_a)->previous = NULL;
    start->previous = NULL;
    while(start != NULL)
    {
        if(start->next == NULL)
        {
           (*list_a)->previous = start;
            start->next = *list_a;
           break;
        }
        start = start->next;
    }
    *list_a = start;
    *list_a =ft_node_start(*list_a);
}

void ft_ra(n_status **list_a,n_status **list_b)
{
    if(*list_b)
        ;
    ruta(list_a);
    ft_printf("ra\n");
  
}

void ft_rb(n_status **list_a,n_status **list_b)
{
    if(list_a)
    ; 
    ruta(list_b);
    ft_printf("rb\n");
  

}

void ft_rr(n_status **list_a,n_status **list_b)
{
    if(list_b)
    {
        
    }
    ruta(list_a);
    ruta(list_a);
    ft_printf("rr\n");
   
}


void ruta_ult(n_status** list_a)
{
    if(*list_a == NULL)
        {
		ft_printf("fake");	
		return;
		}
 n_status *temp;
 n_status *ult;
 ult = NULL;
 temp = *list_a;
 
 while(temp != NULL){
    if(temp->next == NULL)
    {
         ult = temp;
        temp = temp->previous;
         temp->next = NULL;
        break;
    }
    temp = temp->next;
 }  
 temp = ft_node_start(temp);
 ult->previous = NULL;
 ult->next = temp;
 temp->previous=ult;
 temp = ft_node_start(temp);
 *list_a = temp; 

}

void ft_rra(n_status **list_a,n_status **list_b)
{
  if ( ft_list_size(*list_a) != 0)
    ruta_ult(list_a); 
 if(list_b)
    ; 
 
 ft_printf("rra\n");

}

void ft_rrb(n_status **list_a,n_status **list_b)
{
    // ft_printf("rrb %d- \n",ft_list_size(*list_b));
   if ( ft_list_size(*list_b) != 0)
    ruta_ult(list_b);
 if(list_a)
    ;         
  ft_printf("rrb\n");

}
