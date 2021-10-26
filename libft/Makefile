NAME=libft.a

LIBSO=libft.so

CC=gcc

CFLAGS=-Wall -Wextra -Werror

SRC_DIR=src/

BONUS_DIR=lst/

OBJ_DIR=obj/

SRC_FILES=	ft_bzero.c		\
			ft_isalmun.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memchr.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_strchr.c		\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strncmp.c	\
			ft_strrchr.c	\
			ft_tolower.c	\
			ft_toupper.c	

BONUS_FILES=ft_lstadd_back.c	\
			ft_lstadd_front.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstlast.c		\
			ft_lstmap.c			\
			ft_lstnew.c			\
			ft_lstsize.c		

SRC_PATH=$(addprefix $(SRC_DIR), $(SRC_FILES))

BONUS_PATH=$(addprefix $(BONUS_DIR), $(BONUS_FILES))

SRC_NAMES=$(SRC_FILES:.c=.o)

BONUS_NAMES=$(BONUS_FILES:.c=.o)

SRC_PATH_O=$(addprefix $(SRC_DIR), $(SRC_NAMES))

BONUS_PATH_O=$(addprefix $(BONUS_DIR), $(BONUS_NAMES))

HDR_NAME=libft.h

HDR_DIR=includes/

HDR= $(addprefix $(HDR_DIR),$(HDR_NAME))

all: $(NAME)

$(NAME): $(SRC_PATH_O)
	ar rc $@ $<
	ranlib $@

$(OBJ_DIR):
	mkdir $@

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HDR_NAME)
	$(CC) $(CFLAGS) -c $< -o $@ -I includes/libft.h

clean:
	rm -rf $(OBJ_DIR)
	

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re