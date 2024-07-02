/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:44:14 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/02 15:13:14 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft/libft.h"
#include "libft/printf/ft_printf.h"
 

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

n_status *validate_elements_list(char **elements,int len);




#endif