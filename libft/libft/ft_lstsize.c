/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:11:45 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/24 13:34:27 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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

// 	while( oa != NULL)
// 	{
// 		ft_putchar_fd('\n',1);
// 		ft_putstr_fd(oa->content,1);
// 		oa = oa-> next;
// 	}

// }