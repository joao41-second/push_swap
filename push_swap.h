/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:44:14 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/19 11:25:08 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft/libft.h"
#include "libft/printf/ft_printf.h"
 
#define true 1
#define false  0

extern int variavel;


typedef struct t_status
{
	long int number;
	long int index;
	struct t_status *next;
	struct t_status *previous;
}	n_status;


n_status *ft_node_new(long int n, long int index);
/**
* @brief create a new node 
* @param n in of the save in list
* @param index index elemente
* @return node of the memory allcate
*/
void	ft_node_add_front(n_status **lst, n_status *new);
/**
* @brief contaten list
* @param lst list;
* @param nes new elemente of the list;
*/

void *ft_node_clear(n_status *tes);
/**
* @brief giv free in list 
* @param tes element inical of the node gave free 
* @return NULL
*/

n_status *ft_node_start(n_status *list);

/**
* @brief retrur list in inital node 
* @param list in one node
* @return list in intial mode  
*/

n_status *ft_node_end(n_status *list);
/**
* @brief retrur list in final node 
* @param list in one node
* @return list in final mode  
*/

n_status *ft_new_list_null(n_status *list,int len);

void	ft_node_add_inver(n_status **lst, n_status *new);

void ft_print_list(n_status *list ,n_status *list_b);

int list_size(n_status *list);


n_status *valid_dob(n_status *list);

n_status *validate_elements_list(char **elements,int len);



int list_menor(int i ,n_status *list);
int comfirm_list(n_status *list);

//quick_sort

void algorit(n_status **list_a,n_status **list_b ,int len);	



int set_start_pivot( n_status *list,int len);

int set_start_new_pivot( n_status *list,int len);

int valid_pivot(n_status *list,int len);

int locat_pivot(int pivot,n_status *list);




/*
  movimentos 
  
*/

void ft_sa(n_status **list_a,n_status **list_b);

void ft_sb(n_status **list_a,n_status **list_b); //not  tested

void ft_ss(n_status **list_a,n_status **list_b); //not  tested

void ft_pb(n_status **list_a,n_status **list_b);
void ft_pa(n_status **list_a,n_status **list_b);

void ft_ra(n_status **list_a,n_status **list_b);
void ft_rb(n_status **list_a,n_status **list_b);

void ft_rra(n_status **list_a,n_status **list_b);
void ft_rrb(n_status **list_a,n_status **list_b);



#endif