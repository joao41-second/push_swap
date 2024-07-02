# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 14:51:15 by jperpect          #+#    #+#              #
#    Updated: 2024/06/28 14:45:38 by jperpect         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLGS = -Wall -Wextra -Werror

NAME =libftprintf.a

AR = ar rcs

SRCS = ft_printf.c ft_printp.c ft_putnbr_base.c \
ft_putstr_fd.c ft_putchar_fd.c ft_strlen.c \
 

OBJECT = $(SRCS:.c=.o) 


CC = cc 

RM = rm -f


.SILENT:

all: $(NAME)

$(NAME): $(OBJECT)
	$(AR) $@ $^


%.o:%.c libft.h
	cc -c $(FLGS) -o $@ $<  

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

exec:
	cc	-g   $(SRCS) $(BONUS) -lbsd

# norm: 
#    yes y|	python3 -m c_formatter_42 -c $(BONUS)