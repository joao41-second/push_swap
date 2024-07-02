/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 06:13:35 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/03 06:13:41 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ok;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ok = *lst;
	ok = ft_lstlast(ok);
	ok->next = new;
}

/*
int	main(int ac,char **av)
{
	t_list *oa = ft_lstnew(av[1]);
	t_list *ob = ft_lstnew(av[2]);
	t_list *oc = ft_lstnew(av[3]);
	t_list *od = ft_lstnew(av[4]);

	ft_lstadd_back(&oa,ob);
	ft_lstadd_back(&oa,oc);
	ft_lstadd_back(&oa,od);

	
	ft_putnbr_fd(ft_lstsize((oa)),1);
	ft_putchar_fd('\n',1);
	ft_putstr_fd((char *)ft_lstlast(oa) ->content,1);
	
	ft_putchar_fd('\n',1);
	//ft_putstr_fd((char *)ft_lstlast(oa) ->content,1);
	ft_putchar_fd('\n',1);
	
	
	while( oa != NULL)
	{
		ft_putchar_fd('\n',1);
		ft_putstr_fd(oa->content,1);
		oa = oa-> next;
	}
}/*/