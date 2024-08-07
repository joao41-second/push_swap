#include "push_swap.h"



int comfirm_list(n_status *list)
{
    n_status *n;

    while(list->next != NULL)
    {
       
        list = list->next;
         n = list->previous;
        if (n->number > list->number)
        {
            return(1);
        }
    }
    return(0);
}
