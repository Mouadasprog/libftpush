# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Name of the static library
NAME = libft.a

# Source files
SRC = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c \
      ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_substr.c \
      ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
      ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
      ft_isalpha.c ft_memcpy.c ft_split.c ft_strncmp.c \
      ft_isascii.c ft_memmove.c ft_strchr.c ft_strnstr.c \
      ft_isdigit.c ft_memset.c ft_strdup.c ft_strrchr.c ft_itoa.c \
      ft_strmapi.c ft_striteri.c ft_split.c

# Create object files
OBJ = $(SRC:.c=.o)

# Default target (build the library)
all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo "library created succesfuly ---> "$(NAME)

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)
	@echo "Objets has been removed succesfuly."

# Clean everything (objects and library)
fclean: clean
	rm -f $(NAME)
	@echo "All has been removed."

# Rebuild the library
re: fclean all

.PHONY: all clean fclean re

