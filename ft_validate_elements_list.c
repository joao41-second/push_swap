#include "push_swap.h"


int valid_char(char **elements,int len)
{
	int i;
	int d;
	i =-1;
	
	while(++i < len)
	{
		d = -1;
		while(elements[i][++d] !='\0')
		{
			if(!(elements[i][d] == '-' || elements[i][d] == '+') )
			{
				 if (ft_isdigit(elements[i][d]) == 0)
				 	return(0);
			}
		}
	}
	return(1);
}


n_status *validate_elements_list(char **elements,int len)
{
	n_status *list_a;
	n_status *l_temp;
	int i;

	i = -1;
	if(valid_char(elements,len) == 0)
		return(NULL);
	while(++i < len)
	{
		int temp;

		temp = ft_atol(elements[i]);	
		ft_printf("%d",temp);
		if (i == 0)
			l_temp = ft_node_new(temp,i);
		else
		{
			list_a = ft_node_new(temp,i);
			ft_node_add_front(&l_temp,list_a);
		}
		if (temp == 0 && elements[i][0] != '0' )
			return(ft_node_clear(l_temp));
	}
	 	ft_printf("%d = ola ",i);
	return(l_temp);
}
