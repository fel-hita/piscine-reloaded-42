# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 20:13:38 by fel-hita          #+#    #+#              #
#    Updated: 2018/10/03 20:53:27 by fel-hita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
SRC = srcs/*.c

all: exec

exec:
	gcc $(FLAGS) -o ft_display_file $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f ft_display_file

re: fclean all
