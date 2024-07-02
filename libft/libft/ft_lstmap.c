/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:12:09 by jperpect          #+#    #+#             */
/*   Updated: 2024/06/27 11:37:05 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*verf;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst != NULL)
	{
		verf = ft_lstnew((*f)(lst->content));
		if (!verf)
		{
			(del)("aa");
			ft_lstclear(&new);
			return (NULL);
		}
		ft_lstadd_back(&new, verf);
		lst = lst->next;
	}
	return (new);
}

/*  static void liber(void *ok)
{
	ft_putchar_fd('\n',1);
	ft_putstr_fd("funcao tem ",1);
	ft_putstr_fd((char *)ok,1);
}
 static void *lr(void *ok)
{
	return("ola mundo");
}

 */

/*  int main(int ac,char **av)
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
	t_list *env  = ft_lstmap(oa,lr,liber);
	
	//ft_lstclear(&oa,liber);

	//   while( oa != NULL)
	// {
	// 	ft_putchar_fd('\n',1);
		
	// 	ft_putstr_fd(oa->content,1);
	// 	oa = oa-> next;
	// } 
		while( env != NULL)
	{
		ft_putchar_fd('\n',1);
		
		ft_putstr_fd(env->content,1);
		env = env-> next;
	} 
    //free(oa);
}   */