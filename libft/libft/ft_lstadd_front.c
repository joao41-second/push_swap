/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:09:48 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/24 11:57:35 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(int ac,char **av)
// {
// 	t_list *ok = ft_lstnew(av[1]);
// 	t_list *oks = ft_lstnew(av[2]);

// 	ft_lstadd_front(&ok ,oks);

// 	ft_putstr_fd(ok->content,1);
// 	ok = ok->next;
// 	ft_putstr_fd(ok->content,1);

// }