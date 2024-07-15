/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:18:31 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/15 15:52:32 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void free_split(char **str)
{
	int i;
	i = -1;      
	while(str[++i] != NULL)
	{   
		free(str[i]);
	}
	free(str);
	
}

void met_b(n_status **list_a,n_status **list_b,int len)
{
	if(*list_a == NULL)
		return;
	n_status **start; 
	int test;
	test =(*list_b)->number;
	start = list_a;
	int i;
	i = -1;
	while(i <= len)
	{
		//ft_printf("%d > %d\n",test, (*list_a)->number);
		if( (*list_a)->number < test)
		{
			//ft_print_list(start,*list_b);

			ft_pa(list_a,list_b);
			i++;	
		}
		else 
		{
			ft_ra(list_a,list_b);
			i--;
		}
		 if (list_menor(test,*list_a) == false  || (*list_a)->next == NULL)
		 {
			break;
		 }	
	}
}


 

void base_control(char **elements,int len)
{
	n_status *list_a;
	n_status *list_b;
	
	list_b = NULL;
	list_a = validate_elements_list(elements,len);
	if(list_a == NULL)
	{
		ft_printf("error de elementos");
		return;
	}
	//list_b = ft_new_list_null(list_b,len);
	list_a = ft_node_start(list_a);
	
	ft_print_list(list_a,list_b);
	
	algorit(&list_a,&list_b,len);
	
	ft_printf("\n");
	ft_print_list(list_a,list_b);
	
	//ft_node_clear(list_b);
	ft_node_clear(list_a);
}

int	main(int ac,char **av)
{
	if(ac == 2 )
	{
		char **cut;
		int len;
		
		len = 0;
		cut = ft_split(av[1],' ');
		if (cut == NULL)
			return(ft_printf("error_aloc error"));
		while(cut[len] != NULL)
			len++;
		if(len == 1)
			return(ft_printf("error_len < 2"));
		base_control(cut,len);
		free_split(cut);
		
	}
	else if(ac > 2)
	{
		av++;
		base_control(av,ac-1);
	}
	else
		ft_printf("error");
}



