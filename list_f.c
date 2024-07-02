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
	new->next = *lst;
	temp = *lst;
	temp->previous = new;
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


