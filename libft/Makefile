# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jperpect <jperpect@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 11:50:39 by jperpect          #+#    #+#              #
#    Updated: 2024/07/24 11:04:59 by jperpect         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLGS = -Wall -Wextra -Werror


AR = ar rcs

LIBFT_DIR = libft
PRINTF_DIR = printf

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

SRCS = libft.a libftprintf.a

RM = rm -f

.SILENT:

all: $(SRCS)

$(SRCS):
	@cd $(LIBFT_DIR) && make bonus
	@mv $(LIBFT) .
	@cd $(PRINTF_DIR) && make 
	@mv $(PRINTF) .
	$(AR) $@ $^ 
clean:
	$(RM) $(SRCS)
	@cd $(LIBFT_DIR) && make clean
	@cd $(PRINTF_DIR) && make clean
	
	
compile:
	@cd $(LIBFT_DIR) && make bonus
	@mv $(LIBFT) .1
	@cd $(PRINTF_DIR) && make
	@mv $(PRINTF) .

fclean: clean
	$(RM) $(SRCS)
	
re: fclean all

