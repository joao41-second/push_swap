/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 12:17:02 by jperpect          #+#    #+#             */
/*   Updated: 2024/04/24 11:01:36 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = (void *)malloc(nmemb * size);
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, nmemb * size);
	return (ret);
}

// int main(void)
// {
//     char *ok = ft_calloc(2147483647,45);

//     printf("%s\n",ok);
//     char *oks = calloc(2147483647,45);
//     //ft_memset(oks,'a',10);

//     printf("%s",oks);

// }
