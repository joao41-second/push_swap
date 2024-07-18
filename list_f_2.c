#include "push_swap.h"

void ft_print_list(n_status *list ,n_status *list_b)
{
	ft_printf(" \n--------start ----- \n");
	if(list != NULL)
		list = ft_node_start(list);
	if( list_b != NULL)
		list_b = ft_node_start(list_b);
	while(list != NULL)
	{
		ft_printf("a %d ",list->number);
		// ft_printf(" next %x ",list->next);
		// ft_printf(" pervios %x ",list->previous);
		// if( list_b == NULL)
			ft_printf("\n");
		list = list->next;
	}
	ft_printf("\n");
	while(list_b != NULL)
	{
		ft_printf("b %d ",list_b->number);
		// ft_printf(" next %x ",list_b->next);
		// ft_printf(" pervios %x ",list_b->previous);
		ft_printf("\n");
		list_b = list_b->next;
	}
	ft_printf(" \n--------fim ----- \n");
}


void	ft_node_add_inver(n_status **lst, n_status *new)
{
	n_status *temp;
	if (lst == NULL || new == NULL)
		return ;
	new->next= *lst;
	temp = *lst;
	temp->previous = new;
	*lst = new;
	
}

n_status *ft_node_end(n_status *list)
{
	if(list->next != NULL ){
	while(list != NULL)
	{	
		if(list->next == NULL)
			break;
		list = list->next;	
	}
	
	}
	return(list);
	
	
}
int list_size(n_status *list)
{
		int i ;
	i = 0;
	while(list->next != NULL)
	{
		 i++;
		list = list->next;
		
	}
	return(i);
}