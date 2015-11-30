# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dolewski <dolewski@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/23 13:01:21 by dolewski          #+#    #+#              #
#    Updated: 2015/11/29 18:20:26 by dolewski         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CPATH = srcs
HPATH = includes
OPATH = obj

CFLAGS = -Wall -Wextra -Werror -I $(HPATH)

HEADER = libft.h

SRC = ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memccpy.c \
	  ft_memmove.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strlen.c \
	  ft_strdup.c \
	  ft_strcpy.c \
	  ft_strncpy.c \
	  ft_strcat.c \
	  ft_strncat.c \
	  ft_strlcat.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strnstr.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_atoi.c \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_toupper.c \
	  ft_tolower.c \
					\
	  ft_memalloc.c \
	  ft_memdel.c \
	  ft_strnew.c \
	  ft_strdel.c \
	  ft_strclr.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strequ.c \
	  ft_strnequ.c \
	  ft_strsub.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_strsplit.c \
	  ft_itoa.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putendl.c \
	  ft_putnbr.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
					\
	  ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstdel.c \
	  ft_lstadd.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
					\
	  ft_putnbrendl.c \
	  ft_lstpushback.c \
	  ft_itoa_base.c \
	  ft_splittolst.c \
	  ft_lstcount.c


HFILES = $(patsubst %,$(HPATH)/%, $(HEADER))
CFILES = $(patsubst %,$(CPATH)/%, $(SRC))
OFILES = $(patsubst %.c,$(OPATH)/%.o, $(SRC))

all: $(OPATH) $(NAME)

$(NAME): $(OFILES)
	@echo "Building $(NAME)"
	@ar rc $@ $^
	@ranlib $@

$(OPATH)/%.o: $(CPATH)/%.c $(HFILES)
	@echo "Creating file $@"
	@gcc $(CFLAGS) -c $< -o $@

$(OPATH):
	@echo "Creating building directory"
	@mkdir $@

clean:
	@echo "Del building files"
	@/bin/rm -rf $(OPATH)

fclean: clean
	@echo "Del $(NAME)"
	@/bin/rm -f $(NAME)

re: fclean all

