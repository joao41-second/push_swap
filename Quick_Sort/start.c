#include "../push_swap.h"


int set_start_pivot( n_status *list,int len)
{
	int i ;
	i = -1;
	while(++i != len/2)
	{
		list = list->next;
	}
	return(list->number);
}

int chek_1(int pivot,n_status *list)
{
	int i ;
	i = -1;
	while(list->next != NULL)
	{
		++i;
		if(list->number > pivot)
			return(i);
		list = list->next;
	}
	return(-1);
}


int chek_2(int pivot,n_status *list,int len)
{
	int i ;
	i = -1;
	list = ft_node_end(list);
	while(list != NULL)
	{
		++i;
		if(list->number < pivot)
			return(len-i-1);
		list = list->previous;
	}
	return(-1);
}

int aplic_quick_sort(n_status **list_a,n_status **list_b,int pivot,int len)
{
	int chek_index_maior;
	int chek_index_menor;
	int movs;
	int i;

	movs = 0;
	chek_index_maior = chek_1(pivot,*list_a);
	chek_index_menor = chek_2(pivot,*list_a,len);
	if(chek_index_maior < chek_index_menor)
	{
		while()
	}
	return(movs);
}



void algorit(n_status **list_a,n_status **list_b ,int len)
{
	int movs;
	int pivot;
	movs = 0;

	int i ;
	i = -1;

	ft_printf("ola muvs %d",set_start_pivot(*list_a,len));
	pivot = set_start_pivot(*list_a,len);
	while(++i != len/2 )
	{
		ft_pa(list_a,list_b);
		movs++;
	}
	ft_ra(list_a,list_b);
	movs++;
	i = -1;
	while(++i != len/2 )
	{
		ft_pb(list_a,list_b);
		movs++;
	}
	ft_printf("\nindex1 %d",chek_1(pivot,*list_a));
	ft_printf("\nindex2 %d", chek_2(pivot,*list_a,len));


}
