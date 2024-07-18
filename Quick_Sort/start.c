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

int cange_elemente(n_status **list_a,n_status **list_b,int chek_index_menor ,int  chek_index_maior )
{
	int i ;
	int i_save;
	i = -1;
	i_save = 0;
	while(++i <= chek_index_maior)
		ft_pa(list_a,list_b);
	if(i > 0)
	{
		ft_rb(list_a,list_b);
		i_save++;
	}
	i_save += i;
		while(++i <= chek_index_menor){
			ft_pa(list_a,list_b);
			++i_save;
		}
	i_save+=4;
	ft_rrb(list_a,list_b);
	ft_pa(list_a, list_b);
	ft_sb(list_a, list_b);
	ft_print_list(*list_a,*list_b);	
	ft_pb(list_a, list_b);

	i--;	

	while(--i >= 0){
		
		if(i != chek_index_maior && chek_index_maior +1 != chek_index_menor )
		{
			
			 ft_sb(list_a,list_b);
			i_save++;
	
		}
		ft_pb(list_a,list_b);
		i_save++;
	}
}
int cange_pivot(n_status **list_a,n_status **list_b,int  chek_index_maior,int pivot )
{
	int loca = locat_pivot(pivot,*list_a);
	ft_printf("o size do pivot e = %d e size do maior %d",loca,chek_index_maior);
	if(loca == 1 && chek_index_maior == 0)
	{
		ft_sa(list_a,list_b);
		return(1);
	}

	if (loca > chek_index_maior)
	{
		if ( loca!= list_size(*list_a))
		{
			int i ;

			i = -1;
			while(++i != chek_index_maior)
			{
				
				ft_pa(list_a,list_b);
			}
			ft_ra(list_a,list_b);
			i--;
			while(++i != loca)
			{
				ft_pa(list_a,list_b);
			}
			ft_rra(list_a,list_b);
			ft_rb(list_a,list_b);
			while(i > 0)
			{
				if(i == chek_index_maior)
				{
					ft_rrb(list_a,list_b);
				}
				ft_pb(list_a,list_b);
				i--;
			}
		}
		else
		{
			
			 ft_rra(list_a,list_b);
			ft_pa(list_a,list_b);
			int i ;
			i = -1;
			while(++i != chek_index_maior)
			{
					
				ft_pa(list_a,list_b);
			
			}
			ft_ra(list_a,list_b);
			ft_rrb(list_a,list_b);
			while(i-- >= 0)
			{
				ft_pb(list_a,list_b);
			}
		}
	}
	
}

int aplic_quick_sort(n_status **list_a,n_status **list_b,int *pivot,int *len)
{
	int chek_index_maior;
	int chek_index_menor;
	int movs;
	int i;

	movs = 0;

	chek_index_maior = chek_1(pivot[0],*list_a);
	chek_index_menor = chek_2(pivot[0],*list_a,len[0]);
	ft_printf("\nindex1 %d",chek_1(pivot[0],*list_a));
	ft_printf("\nindex2 %d", chek_2(pivot[0],*list_a,len[0]));

	if(chek_index_maior == -1)
	{
		
		pivot[0] = set_start_new_pivot(*list_a,len[0]);

		if (pivot[0] != valid_pivot(*list_a,len[0]))
		{
			ft_printf("nao pode ");
			pivot[0] = valid_pivot(*list_a,len[0]);
		}
		ft_printf("error");
		ft_printf("ola ue pivot - %d",pivot[0]);

	}
	if(chek_index_maior < chek_index_menor)
	{
		
		movs +=	cange_elemente(list_a,list_b,chek_index_menor,chek_index_maior);
	}
	else
	{
		
		pivot[0] = set_start_new_pivot(*list_a,len[0]);
		
		if (pivot[0] != valid_pivot(*list_a,len[0]) )
		{
			pivot[0] = valid_pivot(*list_a,len[0]);
		}
	 	cange_pivot(list_a,list_b,chek_index_maior,pivot[0]);
		ft_printf("ola ue pivot - %d",pivot[0]);
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

	

	
	while(comfirm_list(*list_a)== 1) 
	{
		aplic_quick_sort(list_a,list_b,&pivot,&len);
		ft_print_list(*list_a,*list_b);
		
	}

	
	
	//	cange_pivot(list_a,list_b,0,4);
		


	


}
