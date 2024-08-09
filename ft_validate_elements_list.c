/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_elements_list.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:09:46 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/09 11:33:13 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid_char(char **elements, int len)
{
	int	i;
	int	d;

	i = -1;
	while (++i < len)
	{
		d = -1;
		while (elements[i][++d] != '\0')
		{
			if (!(elements[i][d] == '-' || elements[i][d] == '+'))
			{
				if (ft_isdigit(elements[i][d]) == 0)
					return (0);
			}
		}
	}
	return (1);
}

t_status	*valid_dob(t_status *list)
{
	t_status	*copy;

	copy = list;
	list = ft_node_start(copy);
	while (list != NULL)
	{
		while (copy != NULL)
		{
			if (list->number == copy->number && list->index != copy->index)
				return (ft_node_clear(copy));
			if (copy->next == NULL)
				break ;
			copy = copy->next;
		}
		copy = ft_node_start(copy);
		if (list->next == NULL)
			break ;
		list = list->next;
	}
	return (list);
}

t_status	*validate_elements_list(char **elements, int len)
{
	t_status	*list_a;
	t_status	*l_temp;
	int			i;
	long int	temp;

	i = -1;
	if (valid_char(elements, len) == 0)
		return (NULL);
	while (++i < len)
	{
		temp = ft_atol(elements[i]);
		if (i == 0)
			l_temp = ft_node_new(temp, i);
		else
		{
			list_a = ft_node_new(temp, i);
			ft_node_add_front(&l_temp, list_a);
		}
		if (temp > INT_MAX || temp < INT_MIN)
			return (ft_node_clear(l_temp));
	}
	return (valid_dob(l_temp));
}
