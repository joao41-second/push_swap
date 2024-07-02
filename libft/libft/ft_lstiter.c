/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:52:32 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/01 13:08:00 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/* static void liber(void *ok)
{
	ft_putstr_fd("funcao tem ",1);
	ft_putstr_fd((char *)ok,1);
}

 int main(int ac,char **av)
{
	t_list *oa = ft_lstnew(av[1]);
	t_list *ob = ft_lstnew(av[2]);
	t_list *oc = ft_lstnew(av[3]);
	t_list *od = ft_lstnew(av[4]);

	ft_lstadd_back(&oa,ob);
	ft_lstadd_back(&oa,oc);
	ft_lstadd_back(&oa,od);

	
	//ft_putnbr_fd(ft_lstsize((oa)),1);
	//ft_putchar_fd('\n',1);
	//ft_putstr_fd((char *)ft_lstlast(oa) ->content,1);
	
	//ft_putchar_fd('\n',1);
	//ft_putstr_fd((char *)ft_lstlast(oa) ->content,1);
	//ft_putchar_fd('\n',1);
	
	//ft_lstdelone(oa  ,liber);
	t_list *env  = oa-> next;
	ft_lstiter(oa,liber);
	
	//ft_lstclear(&oa,liber);

		while( oa != NULL)
	{
		ft_putchar_fd('\n',1);
		
		ft_putstr_fd(oa->content,1);
		oa = oa-> next;
	} 
    //free(oa);
}  */