# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbitca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/06 19:30:26 by cbitca            #+#    #+#              #
#    Updated: 2025/01/06 19:30:28 by cbitca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_FILES		=	ft_calloc ft_putpointer ft_unsigneditoa ft_itoa ft_printf_utils ft_printf

SRCS_DIR		=	srcs/
OBJ_DIR			=	obj/
HEADER_DIR		=	include/

CC			= gcc
RM			= rm -f
CFLAGS			= -Wall -Wextra -Werror -I $(HEADER_DIR)
AR			= ar rcs

NAME			= libftprintf.a

SRCS			=	$(addsuffix .c, $(SRCS_FILES))
OBJS			=	$(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:			all clean fclean re