# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymazoz <ymazoz@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/20 19:01:00 by ymazoz            #+#    #+#              #
#    Updated: 2025/05/20 19:02:38 by ymazoz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= minishell

CC			:= cc
CFLAGS	:= -Wall -Wextra -Werror
DFLAGS	:= -MMD -MP

INCLUDES	:= -I./includes -I/usr/local/include


SRC_DIR	:= src
# LIBS_DIR	:= libs

CORE_DIR		:= $(SRC_DIR)/core
LIBFT_DIR		:= $(SRC_DIR)/libft
PARSER_DIR	:= $(SRC_DIR)/parser
LIST_DIR		:= $(SRC_DIR)/list

LIBFT_SRCS	:= $(LIBFT_DIR)/ft_arrlen.c $(LIBFT_DIR)/ft_isascii.c $(LIBFT_DIR)/ft_memset.c \
							 $(LIBFT_DIR)/ft_strcmp.c $(LIBFT_DIR)/ft_strmapi.c $(LIBFT_DIR)/ft_substr.c \
							 $(LIBFT_DIR)/ft_arrmapi.c $(LIBFT_DIR)/ft_isdigit.c $(LIBFT_DIR)/ft_numvalid.c \
							 $(LIBFT_DIR)/ft_strcpy.c $(LIBFT_DIR)/ft_strncmp.c $(LIBFT_DIR)/ft_tolower.c \
							 $(LIBFT_DIR)/ft_atoi.c $(LIBFT_DIR)/ft_isprint.c $(LIBFT_DIR)/ft_putchar_fd.c \
							 $(LIBFT_DIR)/ft_strcspn.c $(LIBFT_DIR)/ft_strndup.c $(LIBFT_DIR)/ft_toupper.c \
							 $(LIBFT_DIR)/ft_atoi_safe.c $(LIBFT_DIR)/ft_isspace.c $(LIBFT_DIR)/ft_putendl_fd.c \
							 $(LIBFT_DIR)/ft_strdup.c $(LIBFT_DIR)/ft_strnstr.c $(LIBFT_DIR)/get_next_line.c \
							 $(LIBFT_DIR)/ft_bzero.c $(LIBFT_DIR)/ft_itoa.c $(LIBFT_DIR)/ft_putnbr_fd.c \
							 $(LIBFT_DIR)/ft_striteri.c $(LIBFT_DIR)/ft_strpbrk.c $(LIBFT_DIR)/get_next_line_utils.c \
							 $(LIBFT_DIR)/ft_calloc.c $(LIBFT_DIR)/ft_memchr.c $(LIBFT_DIR)/ft_putstr_fd.c \
							 $(LIBFT_DIR)/ft_strjoin.c $(LIBFT_DIR)/ft_strrchr.c $(LIBFT_DIR)/ft_del.c \
							 $(LIBFT_DIR)/ft_memcmp.c $(LIBFT_DIR)/ft_split.c $(LIBFT_DIR)/ft_strlcat.c \
							 $(LIBFT_DIR)/ft_strreplace.c $(LIBFT_DIR)/ft_isalnum.c $(LIBFT_DIR)/ft_memcpy.c \
							 $(LIBFT_DIR)/ft_split_stack.c $(LIBFT_DIR)/ft_strlcpy.c $(LIBFT_DIR)/ft_strtod_safe.c \
							 $(LIBFT_DIR)/ft_isalpha.c $(LIBFT_DIR)/ft_memmove.c $(LIBFT_DIR)/ft_strchr.c \
							 $(LIBFT_DIR)/ft_strlen.c $(LIBFT_DIR)/ft_strtrim.c

PARSER_SRCS	:=  $(PARSER_DIR)/example.c

LIST_SRCS		:= $(LIST_DIR)/list_free.c $(LIST_DIR)/list_get.c $(LIST_DIR)/list_insert_shift.c \
							 $(LIST_DIR)/list_length.c $(LIST_DIR)/list_map.c $(LIST_DIR)/list_predicate.c \
							 $(LIST_DIR)/list_push_pop.c


SRCS	:= $(SRC_DIR)/main.c
OBJS	:= $(SRCS:.c=.o)
DEPS	:= $(OBJS:.o=.d)

CORE_SRCS := $(CORE_DIR)/example.c

CORE_OBJS := $(CORE_SRCS:.c=.o)
CORE_DEPS := $(CORE_OBJS:.o=.d)

LIBFT_LIB		:= $(LIBFT_DIR)/libft.a
PARSER_LIB	:= $(PARSER_DIR)/libparser.a
LIST_LIB		:= $(LIST_DIR)/liblist.a

LIBS	:=   $(LIBFT_LIB) $(PARSER_LIB) $(LIST_LIB)

LIB_PATH	:= -L$(PARSER_DIR) \
						 -L$(LIBFT_DIR) \
						 -L$(LIST_DIR) \



LIB_FLAGS	:=  -lparser -lft -llist


all: $(NAME)

$(NAME): $(LIBS) $(CORE_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(CORE_OBJS) $(LIB_PATH) $(LIB_FLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS): ./includes/minishell.h

$(CORE_OBJS): ./includes/minishell.h

$(CORE_DIR)/%.o: $(CORE_DIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(ALGEBRA_LIB): $(ALGEBRA_SRC)
	$(MAKE) -C $(ALGEBRA_DIR) CFLAGS="$(CFLAGS)"

$(LIBFT_LIB): $(LIBFT_SRCS)
	$(MAKE) -C $(LIBFT_DIR) CFLAGS="$(CFLAGS)"

$(PARSER_LIB): $(PARSER_SRCS)
	$(MAKE) -C $(PARSER_DIR) CFLAGS="$(CFLAGS)"

$(BONUS_PARSER_LIB): $(BONUS_PARSER_SRCS)
	$(MAKE) -C $(BONUS_PARSER_DIR) CFLAGS="$(CFLAGS)"

$(LIST_LIB): $(LIST_SRCS)
	$(MAKE) -C $(LIST_DIR) CFLAGS="$(CFLAGS)"

$(EVENT_LIB): $(EVENT_SRCS)
	$(MAKE) -C $(EVENT_DIR) CFLAGS="$(CFLAGS)"

-include $(DEPS) $(CORE_DEPS)

clean:
	find . -name "*.o" -type f -delete
	find . -name "*.d" -type f -delete
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PARSER_DIR) clean
	$(MAKE) -C $(LIST_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PARSER_DIR) fclean
	$(MAKE) -C $(LIST_DIR) fclean

re: fclean all

sanitize: CFLAGS += -fsanitize=address -g
sanitize: fclean all

valgrind: CFLAGS += -g
valgrind: fclean all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME) $(SCENE)

yusuf: all
	./$(NAME) $(SCENE_DIR)/mandatory_tester_scene.rt


.PHONY: all clean fclean re sanitize valgrind
.SECONDARY:
