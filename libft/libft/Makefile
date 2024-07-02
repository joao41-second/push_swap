# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/03 06:17:31 by jperpect          #+#    #+#              #
#    Updated: 2024/07/02 17:20:13 by jperpect         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLGS = -Wall -Wextra -Werror

NAME = libft.a

AR = ar rcs

SRCS = ft_atoi.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcat.c ft_strrchr.c \
 ft_bzero.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_strtrim.c \
 ft_calloc.c ft_itoa.c ft_putchar_fd.c ft_strchr.c ft_strlen.c ft_substr.c \
 ft_isalnum.c ft_memchr.c ft_putendl_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c \
 ft_isalpha.c ft_memcmp.c ft_putnbr_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c \
 ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strjoin.c ft_strnstr.c ft_str_btis.c ft_atol.c 


BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c  ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstprint.c\

OBJECT = $(SRCS:.c=.o) 

OBJECT_B = $(BONUS:.c=.o)

CC = cc 

RM = rm -f


.SILENT:

all: $(NAME)

$(NAME): $(OBJECT)
	$(AR) $@ $^

bonus: $(OBJECT_B) $(NAME)
	ar rcs $(NAME) $^

%.o:%.c libft.h
	cc -c $(FLGS) -o $@ $<

clean:
	$(RM)  $(OBJECT) $(OBJECT_B)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

exec:
	cc	-g $(FLGS)  $(SRCS) $(BONUS) -lbsd

norm: 
	yes y | python3 -m c_formatter_42 -c $(SRCS)