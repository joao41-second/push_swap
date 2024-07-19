#include "../push_swap.h"


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

void cange_elemente(n_status **list_a,n_status **list_b,int chek_index_menor ,int  chek_index_maior )
{
	int i ;
	i = -1;
	while(++i <= chek_index_maior)
		ft_pa(list_a,list_b);
	if(i > 0)
		ft_rb(list_a,list_b);
	while(++i <= chek_index_menor)
		ft_pa(list_a,list_b);
	ft_rrb(list_a,list_b);
	ft_pa(list_a, list_b);
	ft_sb(list_a, list_b);
	ft_pb(list_a, list_b);
	while(i-- >= 0)
	{	
		if(i != chek_index_maior && chek_index_maior +1 != chek_index_menor )
			 ft_sb(list_a,list_b);
		ft_pb(list_a,list_b);
	}
}
void cange_pivot(n_status **list_a,n_status **list_b,int  chek_index_maior,int pivot )
{
	int loca = locat_pivot(pivot,*list_a);
	int i ;
	i = -1;
	if(loca == 1 && chek_index_maior == 0)
	{
		ft_sa(list_a,list_b);
		return;
	}
	if (loca > chek_index_maior)
	{
		if ( loca!= list_size(*list_a))
		{
			while(++i != chek_index_maior)
				ft_pa(list_a,list_b);
			ft_ra(list_a,list_b);
			while(i++ != loca)
				ft_pa(list_a,list_b);
			ft_rra(list_a,list_b);
			ft_rb(list_a,list_b);
			while(--i > 0)
			{
				if(i == chek_index_maior)
					ft_rrb(list_a,list_b);
				ft_pb(list_a,list_b);
			}
		}
		else
		{
			 ft_rra(list_a,list_b);
			ft_pa(list_a,list_b);
			while(++i != chek_index_maior)
				ft_pa(list_a,list_b);
			ft_ra(list_a,list_b);
			ft_rrb(list_a,list_b);
			while(i-- >= 0)
				ft_pb(list_a,list_b);
		}
	}
	
}

void aplic_quick_sort(n_status **list_a,n_status **list_b,int *pivot,int *len)
{
	int chek_index_maior;
	int chek_index_menor;
	chek_index_maior = chek_1(pivot[0],*list_a);
	chek_index_menor = chek_2(pivot[0],*list_a,len[0]);

	if(chek_index_maior == -1)
	{
		pivot[0] = set_start_new_pivot(*list_a,len[0]);
		if (pivot[0] != valid_pivot(*list_a,len[0]))
			pivot[0] = valid_pivot(*list_a,len[0]);
	}
	if(chek_index_maior < chek_index_menor)
			cange_elemente(list_a,list_b,chek_index_menor,chek_index_maior);
	else
	{
		pivot[0] = set_start_new_pivot(*list_a,len[0]);
		if (pivot[0] != valid_pivot(*list_a,len[0]) )
			pivot[0] = valid_pivot(*list_a,len[0]);
	 	cange_pivot(list_a,list_b,chek_index_maior,pivot[0]);
	}
}

void algorit(n_status **list_a,n_status **list_b ,int len)
{
	int pivot;
	int i ;
	i = -1;
	pivot = set_start_pivot(*list_a,len);
	ft_rra(list_a,list_b);
	ft_pa(list_a,list_b);
	while(++i != len/2 )
		ft_pa(list_a,list_b);
	ft_rrb(list_a,list_b);
	ft_ra(list_a,list_b);
	i = -1;
	while(++i != len/2+1 )
		ft_pb(list_a,list_b);
	while(comfirm_list(*list_a)== 1) 
		aplic_quick_sort(list_a,list_b,&pivot,&len);	
}
