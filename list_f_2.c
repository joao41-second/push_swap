#include "push_swap.h"

void ft_print_list(n_status *list ,n_status *list_b)
{
	if(list != NULL)
		list = ft_node_start(list);
	if( list_b != NULL)
		list_b = ft_node_start(list_b);
	while(list != NULL)
	{
		ft_printf(" %d ",list->number);
		if( list_b == NULL)
			ft_printf("\n");
		list = list->next;
	}
	
	while(list_b != NULL)
	{
		ft_printf(" %d \n",list_b->number);
		list_b = list_b->next;
	}

}