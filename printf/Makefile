NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./ -I ./libft/
SRC = ft_printf.c conversion_utils.c write_utils.c arg_utils.c
LIBFT_DIR = libft/
LIBFT_SRC = $(LIBFT_DIR)ft_bzero.c $(LIBFT_DIR)ft_isalnum.c $(LIBFT_DIR)ft_isalpha.c $(LIBFT_DIR)ft_isdigit.c \
				$(LIBFT_DIR)ft_substr.c $(LIBFT_DIR)ft_isascii.c $(LIBFT_DIR)ft_isprint.c $(LIBFT_DIR)ft_memcpy.c \
				$(LIBFT_DIR)ft_memccpy.c $(LIBFT_DIR)ft_memmove.c $(LIBFT_DIR)ft_memset.c $(LIBFT_DIR)ft_strlen.c \
				$(LIBFT_DIR)ft_tolower.c $(LIBFT_DIR)ft_toupper.c $(LIBFT_DIR)ft_memcmp.c $(LIBFT_DIR)ft_strchr.c \
				$(LIBFT_DIR)ft_strrchr.c $(LIBFT_DIR)ft_memchr.c $(LIBFT_DIR)ft_strmapi.c $(LIBFT_DIR)ft_atoi.c \
				$(LIBFT_DIR)ft_strlcpy.c $(LIBFT_DIR)ft_calloc.c $(LIBFT_DIR)ft_itoa.c $(LIBFT_DIR)ft_split.c \
				$(LIBFT_DIR)ft_strjoin.c $(LIBFT_DIR)ft_strdup.c $(LIBFT_DIR)ft_strlcat.c $(LIBFT_DIR)ft_strncmp.c \
				$(LIBFT_DIR)ft_putchar_fd.c $(LIBFT_DIR)ft_putstr_fd.c $(LIBFT_DIR)ft_strnstr.c \
				$(LIBFT_DIR)ft_putendl_fd.c $(LIBFT_DIR)ft_putnbr_fd.c $(LIBFT_DIR)ft_strtrim.c 
OBJ = $(SRC:.c=.o)
LIBFT_OBJ = $(LIBFT_SRC:.c=.o)
CLEAN = ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isdigit.o ft_substr.o \
				ft_isascii.o ft_isprint.o ft_memcpy.o ft_memccpy.o \
				ft_memmove.o ft_memset.o ft_strlen.o ft_tolower.o ft_toupper.o \
				ft_memcmp.o ft_strchr.o ft_strrchr.o ft_memchr.o ft_strmapi.o\
				ft_atoi.o ft_strlcpy.o ft_calloc.o ft_itoa.o ft_split.o \
				ft_strjoin.o ft_strdup.o ft_strlcat.o ft_strncmp.o \
				ft_putchar_fd.o ft_putstr_fd.o ft_strnstr.o \
				ft_putendl_fd.o ft_putnbr_fd.o ft_strtrim.o 

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_OBJ)
	$(CC) $(FLAGS) -c $(SRC) $(LIBFT_SRC)
	ar rcs $(NAME) $(OBJ) $(LIBFT_OBJ)
	make clean

clean:
	rm -f $(LIBFT_OBJ) $(OBJ) $(CLEAN)

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re