/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:44:14 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/08 14:18:29 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft/libft.h"
# include "libft/printf/ft_printf.h"
# include <limits.h>

typedef struct t_status
{
	long int		number;
	long int		index;
	struct t_status	*next;
	struct t_status	*previous;
}								t_status;

t_status			*ft_node_new(long int n, long int index);
/**
* @brief create a new node 
* @param n in of the save in list
* @param index index elemente
* @return node of the memory allcate
*/
void				ft_node_add_front(t_status **lst, t_status *new);
/**
* @brief contaten list
* @param lst list;
* @param nes new elemente of the list;
*/

void				*ft_node_clear(t_status *tes);
/**
* @brief giv free in list 
* @param tes element inical of the node gave free 
* @return NULL
*/

t_status			*ft_node_start(t_status *list);

/**
* @brief retrur list in inital node 
* @param list in one node
* @return list in intial mode  
*/

t_status			*ft_node_end(t_status *list);
/**
* @brief retrur list in final node 
* @param list in one node
* @return list in final mode  
*/

t_status			*ft_new_list_null(t_status *list, int len);

void				ft_node_add_inver(t_status **lst, t_status *new);

void				ft_print_list(t_status *list, t_status *list_b);

int					ft_list_size(t_status *list);

t_status			*valid_dob(t_status *list);

t_status			*validate_elements_list(char **elements, int len);

int					list_menor(int i, t_status *list);
int					comfirm_list(t_status *list);

//quick_sort

void				algorit(t_status **list_a, t_status **list_b, int len);

// int set_start_pivot( t_status *list,int len);

// int set_start_new_pivot( t_status *list,int len);

// int valid_pivot(t_status *list,int len);

// int locat_pivot(int pivot,t_status *list);

void				three(t_status **list_a, t_status **list_b);

void				five(t_status **list_a, t_status **list_b, int len);

int					set_min(t_status *list, int index);

void				list_index_max_int(t_status *list);

void				list_index(t_status **list_a, int len);

char				order(t_status *list_a, int bin_index);

long int			ulti_node_une(t_status *list_a, int i);

/*
  movimentos 
  
*/

void				ft_sa(t_status **list_a, t_status **list_b);

void				ft_sb(t_status **list_a, t_status **list_b); //not  tested

void				ft_ss(t_status **list_a, t_status **list_b); //not  tested

void				ft_pb(t_status **list_a, t_status **list_b);
void				ft_pa(t_status **list_a, t_status **list_b);

void				ft_ra(t_status **list_a, t_status **list_b);
void				ft_rb(t_status **list_a, t_status **list_b);

void				ft_rra(t_status **list_a, t_status **list_b);
void				ft_rrb(t_status **list_a, t_status **list_b);

// update
int					ft_pa_loop_otimiz(int loop, t_status **list_a,
						t_status **list_b);

int					set_max(t_status *list, int len);

#endif