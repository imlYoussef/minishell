# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/01 09:18:45 by souahidi          #+#    #+#              #
#    Updated: 2025/05/20 18:54:15 by ymazoz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = -I../../includes/

CFLAGS	= -Wall -Wextra -Werror

SRCS = example.c # add your source files here "by name .c "

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

all: $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: $(OBJS) $(DEPS)
