/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:24:15 by jperpect          #+#    #+#             */
/*   Updated: 2024/05/01 15:39:23 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc_p(int n, int id, char **ren)
{
	int	i;

	i = 0;
	ren[id] = (char *)malloc((n + 1) * sizeof(char));
	if (ren[id] == NULL)
	{
		while (i < id)
		{
			free(ren[i]);
			i++;
		}
		free(ren);
		return (NULL);
	}
	return (ren);
}

static int	conta(char const *s, char c)
{
	int	i;
	int	n_p;

	i = 0;
	n_p = 0;
	if (s[0] == c)
		n_p = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
		{
			n_p++;
		}
		i++;
	}
	return (n_p);
}

static void	conta_len(char const *s, char c, char **ren)
{
	int	i;
	int	n_p;
	int	len;

	i = 0;
	n_p = 0;
	len = 0;
	if (s[0] == c)
		n_p = -1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			len++;
		else if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
		{
			if (len != 0)
				alloc_p(len, n_p, ren);
			n_p++;
			len = 0;
		}
		i++;
	}
	alloc_p(len, n_p, ren);
}

static void	creiate(char const *s, char c, char **ren)
{
	int	i;
	int	n_p;
	int	len;

	i = 0;
	n_p = 0;
	len = 0;
	if (s[0] == c)
		n_p = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
		{
			if (len != 0)
				ren[n_p][len] = '\0';
			n_p++;
			len = 0;
		}
		else if (s[i] != c)
		{
			ren[n_p][len++] = s[i];
		}
		i++;
	}
	ren[n_p][len] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		n_p;
	char	**ren;

	n_p = conta(s, c) + 1;
	if (0 >= conta(s, c) && ft_strlen(s) == 0)
		n_p = 0;
	ren = (char **)malloc((n_p + 1) * sizeof(char *));
	if (ren == NULL)
		return (NULL);
	ren[n_p] = NULL;
	if (n_p + 1 == 1)
		return (ren);
	free(ren[n_p]);
	if (ft_strlen(s) != 0)
	{
		conta_len(s, c, ren);
		creiate(s, c, ren);
	}
	return (ren);
}

// int main(int ac,char **av)
// {
//     int conta = 0;
//     char ok [5][100] = {
//         "ola","mundo"
//     } ;
//     char **ret;
//     ret = ft_split(av[1],av[2][0]);

//     while(ok[conta])
//     {
//          printf("%s\n", ok[conta]);
//           conta++;
//     }
// }

/*  int	main(int ac,char **av)
{
	char	**str;
	int		i;

  //  int *ok;
//	while (*str){
//		printf("%s\n", *str);
  //      free(*str++);
   // }
   // free(**str);
    str = ft_split("hello!", 32);
    i = 0;
		while(str[i] != NULL )
     {
        //ft_putnbr_fd(ft_strlen(str[i]) +1,1);
		ft_putchar_fd(' ',1);
        ft_putstr_fd(str[i],1);
        ft_putchar_fd('\n',1);
        free(str[i]);
        i++;
    }
    free(str);
    //ft_putnbr_fd(i,1);
    //free(str[i]);
   // free(str[3]);
   // ft_free(3,ok,str,3);
}
 */