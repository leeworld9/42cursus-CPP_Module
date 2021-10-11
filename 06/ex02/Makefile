# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dohelee <dohelee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/23 21:59:27 by dohelee           #+#    #+#              #
#    Updated: 2021/10/10 23:01:44 by dohelee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = #-Wall -Wextra -Werror

NAME = main

SRCS = main.cpp Base.cpp A.cpp B.cpp C.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all	: $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
