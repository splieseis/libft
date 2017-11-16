# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 10:30:07 by spliesei          #+#    #+#              #
#    Updated: 2017/11/16 17:27:05 by spliesei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c *.h

CFLAGS = -Wall -Wextra -Werror

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) ft_*.o

all: $(NAME)

clean:
	rm -f ft_*.o

fclean: clean
	rm -f $(NAME)

re: fclean
	make
