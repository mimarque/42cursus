# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 18:26:42 by mimarque          #+#    #+#              #
#    Updated: 2021/11/01 23:28:57 by mimarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

LIBSO=libft.so

CC=gcc

CFLAGS=-Wall -Wextra -Werror

SRC_DIR=src/

BONUS_DIR=lst/

OBJ_DIR=obj/

SRC_FILES=	ft_atoi.c		\
			ft_bzero.c		\
			ft_calloc.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_itoa.c		\
			ft_memccpy.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_strchr.c		\
			ft_strdup.c		\
			ft_strjoin.c	\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strmapi.c	\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_tolower.c	\
			ft_toupper.c	

BONUS_FILES=ft_lstadd_back.c	\
			ft_lstadd_front.c	\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstlast.c		\
			ft_lstmap.c			\
			ft_lstnew.c			\
			ft_lstsize.c		

SRC_PATH=$(addprefix $(SRC_DIR), $(SRC_FILES))

BONUS_PATH=$(addprefix $(BONUS_DIR), $(BONUS_FILES))

SRC_NAMES=${SRC_FILES:.c=.o}

BONUS_NAMES=${BONUS_FILES:.c=.o}

SRC_PATH_O=$(addprefix $(OBJ_DIR), $(SRC_NAMES))

BONUS_PATH_O=$(addprefix $(OBJ_DIR), $(BONUS_NAMES))

HDR_NAME=libft.h

HDR_DIR=includes/

HDR= $(addprefix $(HDR_DIR),$(HDR_NAME))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(SRC_NAMES)
	ar -rc $@ $(SRC_NAMES)
	ranlib $@

$(OBJ_DIR):
	mkdir $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -rf $(OBJ_DIR)
	rm -rf src/*.o
	rm -rf *.o

sclean: clean
	rm -rf $(NAME) $(LIBSO) a.out

fclean: clean
	rm -f $(NAME)

re: fclean all


so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC_FILES) $(BONUS_FILES)
	gcc -nostartfiles -shared -o libft.so $(SRC_FILES) $(BONUS_FILES)

.PHONY: all clean fclean re so
