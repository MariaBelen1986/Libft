# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mataborr <mataborr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 13:20:14 by mataborr          #+#    #+#              #
#    Updated: 2024/08/13 18:18:29 by mataborr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the library
NAME = libft.a

# Compilator and compilator options
CC = $(shell which cc clang gcc | head -n 1)

CFLAGS = -Wall -Wextra -Werror

# Sources
SRCS	= 	ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\

BONUS	=	ft_lstadd_back_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstmap_bonus.c\
			ft_lstnew_bonus.c\
			ft_lstsize_bonus.c\

# Objects generated during compilation
OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)
# Default rule for compiling the library
all: $(NAME)
# Rule to compile your main project and link it with libft
$(NAME) : $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)
	
bonus : $(OBJS) $(BONUS_OBJS)
	$(AR) rcs $(NAME) $(OBJS) $(BONUS_OBJS)
# Rule to compile each source file into an object
%.o : %.c
	$(CC) $(CFLAGS) -c $? -o $@
# Rule to remove generated objects
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
# Rule to remove the library
fclean: clean
	rm -f $(NAME) $(OBJS) $(BONUS_OBJS)
# Rule to rebuild the project from scratch
re: fclean all

.PHONY: clean fclean re all bonus
