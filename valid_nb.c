/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:09:06 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/08 14:18:34 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	comfirm_list(t_status *list)
{
	t_status	*n;

	while (list->next != NULL)
	{
		list = list->next;
		n = list->previous;
		if (n->number > list->number)
		{
			return (1);
		}
	}
	return (0);
}
