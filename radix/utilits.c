/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 16:12:20 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/08 12:02:20 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	set_min(n_status *list, int index)
{
	long int	min;
	int			i;
	n_status	*save_min;

	save_min = list;
	i = -1;
	min = (long int)INT_MAX + 1;
	while (list != NULL)
	{
		if (min > list->number && list->index == (long int)INT_MAX + 1)
		{
			min = list->number;
			save_min = list;
		}
		list = list->next;
	}
	save_min->index = index;
	return (min);
}

void	list_index_max_int(n_status *list)
{
	while (list->next != NULL)
	{
		list->index = (long int)INT_MAX + 1;
		list = list->next;
	}
	list->index = (long int)INT_MAX + 1;
}

void	list_index(n_status **list_a, int len)
{
	int	i;

	list_index_max_int(*list_a);
	i = 0;
	while (i <= len - 1)
	{
		set_min(*list_a, i);
		i++;
	}
}

char	order(n_status *list_a, int bin_index)
{
	int		i;
	char	bits[33];

	i = 0;
	ft_str_btis(32, list_a->index, bits);
	bits[32] = '\0';
	return (bits[bin_index]);
}

long int	ulti_node_une(n_status *list_a, int i)
{
	long int	save;

	save = (long int)INT_MIN - 1;
	while (list_a != NULL)
	{
		if (order(list_a, 31 - i) == '1')
			save = list_a->number;
		if (list_a->next == NULL)
			break ;
		list_a = list_a->next;
	}
	return (save);
}
