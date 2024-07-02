/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:50:27 by jperpect          #+#    #+#             */
/*   Updated: 2024/06/28 14:00:57 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstptint(t_list *lst, int dg)
{
	t_list	*lsts;

	lsts = lst;
	while (lsts != NULL)
	{
		ft_putstr_fd(lsts->content, dg);
		free(lsts->content);
		lsts = lsts->next;
	}
}
