#include "../push_swap.h"
void ruta(n_status** list_a)
{

    if (*list_a == NULL )
        return;
    n_status *start;
    if((*list_a)->next == NULL )
    {
       // ft_sa(list_a,list_a);
       return;
    }

    start = (*list_a)->next;
    ( *list_a) ->next = NULL;
    (*list_a)->previous = NULL;
    start->previous = NULL;

    while(start != NULL)
    {
        if(start->next == NULL)
        {
           
           (*list_a)->previous = start;
            start->next = *list_a;
           break;
        }
        start = start->next;
    }
    
    *list_a = start;
    *list_a =ft_node_start(*list_a);
}

void ft_ra(n_status **list_a,n_status **list_b)
{
    *list_a = ft_node_start(*list_a);
	if(*list_b != NULL)
		*list_b = ft_node_start(*list_b);;
    ruta(list_a);
    ft_printf("ra");
    variavel++;

}

void ft_rb(n_status **list_a,n_status **list_b)
{

 
    ruta(list_b);
    ft_printf("rb");
    variavel++;

}

void ft_rr(n_status **list_a,n_status **list_b)
{
   
    ruta(list_a);
    ruta(list_a);
       ft_printf("rr");
 variavel++;

}


void ruta_ult(n_status** list_a)
{
    if(*list_a == NULL)
        return;
 n_status *temp = *list_a;
 n_status *ult;
 
 while(temp != NULL){
    if(temp->next == NULL)
    {
         ult = temp;
        temp = temp->previous;
         temp->next = NULL;
        break;
    }
    temp = temp->next;
 }  
 temp = ft_node_start(temp);
 ult->previous = NULL;
 ult->next = temp;
 temp->previous=ult;
 temp = ft_node_start(temp);
 *list_a = temp; 

}

void ft_rra(n_status **list_a,n_status **list_b)
{
  if ( list_size(*list_a) != 0)
    ruta_ult(list_a);      
 
 ft_printf("rra\n");
 variavel++;
}

void ft_rrb(n_status **list_a,n_status **list_b)
{
    // ft_printf("rrb %d- \n",list_size(*list_b));
   if ( list_size(*list_b) != 0)
    ruta_ult(list_b);        
  ft_printf("rrb\n");
  variavel++;
}
