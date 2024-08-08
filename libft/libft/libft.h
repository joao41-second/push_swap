/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:29 by jperpect          #+#    #+#             */
/*   Updated: 2024/07/22 18:23:21 by jperpect         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <aio.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);

void				*ft_memmove(void *dest, const void *src, size_t n);
/**
* @brief move de bitts of the memori to destany.
* @param dest variavel that get bitts.
* @param src  variavel with bitts to move.
* @return void variabel dest.
*/
void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);

int					ft_atoi(const char *nptr);
/**
* @brief convert char in int.
* @param nptr nuber in variabel char. 
* @return nuber in variabel int. 
*/
long int			ft_atol(const char *nptr);
/**
* @brief convert char in long int.
* @param nptr nuber in variabel char. 
* @return nuber in variabel long int. 
*/

void				*ft_calloc(size_t nmemb, size_t size);
/**
* @brief create a variable with memory reserved.
* @param nemeb number de menbers os de valiabel. 
* @param size number de bittes fo menber.
* @return variabel zered .
*/

char				*ft_strdup(const char *s);
/**
* @brief copy a sting to new string.
* @param s setring to copy.
* @return string compyed. 
*/

char				*ft_substr(char const *s, unsigned int start, size_t len);
/**
* @brief copy  string  as of start.
* @param s setring inicals.
* @param start carecter the substring satarted
* @param len max_len the substring.
* @return substring inicialeze in.
*/

char				*ft_strjoin(char const *s1, char const *s2);
/**
* @brief concatenation of two strings. 
* @param s1 first string.
* @param s2 second string.
* @return reutnr a concatenation of s1 and s2.
*/

char				*ft_strtrim(char const *s1, char const *set);
/**
* @brief remuve *set caraters up to meet it difrent to set caracter.
* @param s1 string complit;
* @param set caracters to remuve;
* @return a string without os cararteres de set 
*/

char				**ft_split(char const *s, char c);
/**
* @brief separite a string in words baseated in caractre c.
* @param s string to division. 
* @param c caractre to marcard divison.
* @return list separated in word
*/

char				*ft_itoa(int n);
/**
* @brief tranform int to char. 
* @param n number in int.
* @return char wtid memory aloceted. 
*/

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
* @brief excute a funcion f in all elements of s.
* @param s strimg where aplicate a funcion .
* @param f funcion that get unsigned int and char.
*/

void				ft_striteri(char *s, void (*f)(unsigned int, char *));
/**
* @brief excute a funcion f in all elements of s.
* @param s strimg where aplicate a funcion .
* @param f funcion that get unsigned int and char*.
*/

void				ft_putchar_fd(char c, int fd);
/**
* @brief display a char c in terminal
* @param c char display.
* @param fd filed
*/

void				ft_putstr_fd(char *s, int fd);
/**
* @brief display a string s in terminal
* @param s char display.
* @param fd filed
*/

void				ft_putendl_fd(char *s, int fd);
/**
* @brief display a string s in terminal next new line
* @param s char display.
* @param fd filed
*/
void				ft_putnbr_fd(int n, int fd);
/**
* @brief display a int n in terminal
* @param n int displayed.
* @param fd filed.
*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
/**
* @brief creiate a new node .
* @param content variavel content to new node. 
* @return the new node to memory allocate.
*/
void				ft_lstadd_front(t_list **lst, t_list *new);
/**
* @brief add new menber tu list in frist menber .
* @param lst list existing. 
* @param new elmente to list.
*/
int					ft_lstsize(t_list *lst);
/**
* @brief count nuber to elementes to list
* @param lst list in first elemnte
* @return number of elementes 
*/
t_list				*ft_lstlast(t_list *lst);
/**
* @brief lacte to last node to list.
* @param lst node in first elemente.
* @return last node. 
*/
void				ft_lstadd_back(t_list **lst, t_list *new);
/**
* @brief and menber to list to last menber 
* @param lst list create after moment 
* @param new elemente to list
*/
void				ft_lstdelone(t_list *lst);
/**
* @brief delet to menber to free
* @param lst menber to list the del
* @param funcion to excute ao del item 
*/
void				ft_lstclear(t_list **lst);
/**
* @brief clear and free list. 
* @param lst list;
* @param funcion to excute. 
*/
void				ft_lstiter(t_list *lst, void (*f)(void *));
/**
* @brief aplay f in list.
* @param lst list .
* @param f funcion to aplicade.
*/
void				ft_lstptint(t_list *lst, int gd);
/**
* @brief print elementes to list
* @param lst list in first elemnte
*/
void				ft_str_btis(int number_bist, int bits, char *bts);
/**
* @brief save in char *bts repetiv bits of the bits 
* @param nuber_bist nober de bits of the variabe ex int 32 char 8
* @param bits char or int to conver in string
* @param bts string where save the bits in format of the string
*/
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif

/**
     * @brief Subtracts one number from another.
     * @param a The first number.
     * @param b The second number.
     * @return The result of subtracting b from a.
     */