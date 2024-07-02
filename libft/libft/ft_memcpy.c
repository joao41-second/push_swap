/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:09:25 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/01 15:40:19 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	cont;
	char	*str;
	char	*des;

	cont = 0;
	str = (char *)src;
	des = (char *)dest;
	if (des == (void *)0 && str == (void *)0)
		return (NULL);
	while (cont < n)
	{
		des[cont] = str[cont];
		cont++;
	}
	return (des);
}

/*int main(void)
{
	char	str[100];
	char	*des;
	char	str2[100];
	char	*des2;

		str[100] = "ola mundo";
    des = &str[3];
		str2[100] = "ola mundo";
    des2 = &str2[3];
	memcpy(str,des,3);
	print(str);
		print("\n");
	
    ft_memcpy(str2,des2,3);
    print(str2);
    print("\n");
    
}

int	main(void)
{
		char str[100] = "olaaaa mundo";
    char *des = &str[3];
	char str2[100] = "olaaaa mundo";
    char *des2 = &str2[3];

	memcpy(des,str,9);
	print(des);
		print("\n");
	
    ft_memcpy(des2,str2,6);
    print(des2);
    print("\n");
    

}*/
