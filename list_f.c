/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:04:01 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/03 14:16:33 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


n_status *ft_node_new(long int n, long int index)
{
	n_status	*new_node;

	new_node = (n_status *)malloc(1 * (sizeof(n_status)));
	if (new_node == NULL)
		return (NULL);
	new_node->number = n;
	new_node->index = index;
	new_node->next = NULL;
	new_node->previous = NULL;
	return (new_node);
}

void	ft_node_add_front(n_status **lst, n_status *new)
{
	n_status *temp;
	if (lst == NULL || new == NULL)
		return ;
	new->previous = *lst;
	temp = *lst;
	temp->next = new;
	*lst = new;
	
}

void *ft_node_clear(n_status *tes)
{
	
	n_status *temp;
		while(tes != NULL)
	{
		temp =  tes->next;
		free(tes);
		tes = temp;
	}
	return(NULL);
}

n_status *ft_node_start(n_status *list)
{
	while(list != NULL)
	{	
		if(list->previous == NULL)
			break;
		list = list->previous;	
	}
	return(list);
}

n_status *ft_new_list_null(n_status *list,int len)
{
	n_status *new;
	int i;
	int env;
	env = 0;
	i =0;
	list = ft_node_new(env,i);
	while(++i < len)
	{
		new	= ft_node_new(env,i);
		ft_node_add_front(&list,new);
	}
	return(list);
	
}




// int	main(int ac,char **av)
// {
// 	 n_status *tes;
// 	 n_status *tea;
// 	 n_status *teb;
// 	 n_status *tec;
// 	 tes = ft_node_new(1561,0);
// 	 tea = ft_node_new(1,1);
// 	 teb = ft_node_new(15,2);
// 	 tec = ft_node_new(18,3);

// 	 ft_node_add_front(&tes,tea);
// 	 ft_node_add_front(&tes,teb);
// 	ft_node_add_front(&tes,tec);

// 	while(tes != NULL)
// 	{
// 		ft_printf("%d\n",tes->number);
// 		ft_printf("antes %x\n",tes->previous);
// 		ft_printf("depois %x\n",tes->next);
// 		if(tes->next == NULL)
// 			break;
// 		tes = tes->next;
// 	}

	
// 	while(tes != NULL)
// 	{
// 		ft_printf("%d\n",tes->number);
		
// 		if(tes->previous == NULL)
// 			break;
// 		tes = tes->previous;	
// 	}




// }


