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

SRCS	=	ft_calloc.c ft_itoa.c ft_printf_utils.c ft_printf.c \
		ft_putpointer.c ft_unsigneditoa.c

OBJS	=	$(SRCS:.c=.o)

CC = gcc
RM = rm -f
cFLAGS = -Wall -Wextra -Werror

NAME = ft_printf.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re



