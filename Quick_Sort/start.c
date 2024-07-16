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

int cange_elemente(n_status **list_a,n_status **list_b,int chek_index_menor ,int  chek_index_maior )
{
	int i ;
	int i_save;
	i = -1;
 
	while(++i <= chek_index_maior)
		ft_pa(list_a,list_b);
	if(i > 0)
		ft_rb(list_a,list_b);
	
	i_save = i;
		while(++i <= chek_index_menor){
			ft_pa(list_a,list_b);
			
		}
	ft_rrb(list_a,list_b);
	ft_pa(list_a, list_b);
	ft_sb(list_a, list_b);
	ft_pb(list_a, list_b);
	while(i >= 0){
		
		if(i != chek_index_maior)
		{
			ft_sb(list_a,list_b);
		}
		ft_pb(list_a,list_b);
		i--;
	}



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
		cange_elemente(list_a,list_b,chek_index_menor,chek_index_maior);
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


	ft_rra(list_a,list_b);
	ft_pa(list_a,list_b);
	movs+=2;
	while(++i != len/2 )
	{
		ft_pa(list_a,list_b);
		movs++;
	}
	ft_rrb(list_a,list_b);
	ft_ra(list_a,list_b);
	movs+=2;
	i = -1;
	while(++i != len/2+1 )
	{
		ft_pb(list_a,list_b);
		movs++;
	}


	ft_printf("\nindex1 %d",chek_1(pivot,*list_a));
	ft_printf("\nindex2 %d", chek_2(pivot,*list_a,len));
	ft_print_list(*list_a,*list_b);
		aplic_quick_sort(list_a,list_b,pivot,len);	


	


}
