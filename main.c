/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:18:31 by jperpect          #+#    #+#             */
/*   Updated: 2024/08/09 11:30:31 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_split(char **str)
{
	int	i;

	i = -1;
	while (str[++i] != NULL)
	{
		free(str[i]);
	}
	free(str);
}

void	base_control(char **elements, int len)
{
	t_status	*list_a;
	t_status	*list_b;

	list_b = NULL;
	list_a = validate_elements_list(elements, len);
	if (list_a == NULL)
	{
		ft_printf("Error");
		return ;
	}
	list_a = ft_node_start(list_a);
	algorit(&list_a, &list_b, len);
	ft_node_clear(list_a);
}

int	main(int ac, char **av)
{
	char	**cut;
	int		len;

	if (ac == 2)
	{
		len = 0;
		cut = ft_split(av[1], ' ');
		if (cut == NULL)
			return (ft_printf("Error"));
		while (cut[len] != NULL)
			len++;
		if (len == 1)
			return (ft_printf(""));
		base_control(cut, len);
		free_split(cut);
	}
	else if (ac > 2)
	{
		av++;
		base_control(av, ac - 1);
	}
	else
		ft_printf("Error");
}
