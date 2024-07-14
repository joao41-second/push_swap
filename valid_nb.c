#include "push_swap.h"

int list_maior(int i ,n_status *list)
{
    if (list == NULL)
        return(false);
    list = ft_node_start(list);
    while(list != NULL)
    {
        if(i < list->number){
            return(true);
        }
        if(list->next == NULL){
         break;
        }
        list = list->next;
    }
    return(false);
}

int list_menor(int i ,n_status *list)
{
     if (list == NULL)
        return(false);
    list = ft_node_start(list);
    while(list != NULL)
    {
        //ft_printf("%d",list->number);
        if(i > list->number){
            return(true);
        }
        if(list->next == NULL){
         break;
        }
        list = list->next;
    }
    return(false);
}