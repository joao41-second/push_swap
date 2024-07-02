/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:40:59 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/24 14:00:34 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (0);
}

// int main(int ac,char **av)
// {
// 	t_list *oa = ft_lstnew(av[1]);
// 	t_list *ob = ft_lstnew(av[2]);
// 	t_list *oc = ft_lstnew(av[3]);
// 	t_list *od = ft_lstnew(av[4]);

// 	ft_lstadd_front(&oa,ob);
// 	ft_lstadd_front(&oa,oc);
// 	ft_lstadd_front(&oa,od);

// 	ft_putnbr_fd(ft_lstsize((oa)),1);
// 	ft_putchar_fd('\n',1);
// 	ft_putstr_fd((char *)ft_lstlast(oa) ->content,1);

// 	while( oa != NULL)
// 	{
// 		ft_putchar_fd('\n',1);
// 		ft_putstr_fd(oa->content,1);
// 		oa = oa-> next;
// 	}
// }