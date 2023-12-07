NAME		:=	libftprintf.a

CC			:=	gcc

CFLAGS		:=	-g -Wall -Wextra -Werror

AR			:=	ar -crs

RM			:=	rm -rf

SRCS		:=	ft_print_hex.c		\
				ft_print_pointer.c	\
				ft_putchar.c		\
				ft_putnbr.c			\
				ft_putstr.c 		\
				ft_unsigned_nbr.c	\
				ft_printf.c

OBJS_DIR	:=	obj/

SRCS_DIR	:=	src/

OBJS 		:=	$(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

# COLORS ================================================================= #

RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
WHITE = \033[0;97m

# ======================================================================== #

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
			@mkdir -p $(dir $@)
			@$(CC) $(CFLAGS) -c $< -o $@
			@echo "$(GREEN)Compiling:$(WHITE) $<"

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "$(YELLOW)- Program Name: $(WHITE)${NAME}"
	@echo "$(YELLOW)- Compiler: $(WHITE)${CC}"
	@echo "$(YELLOW)- Flags: $(WHITE)${CFLAGS}"

clean:
	$(RM) $(OBJS)
	@echo "$(RED)All object files removed.$(WHITE)"

fclean: clean
	$(RM) $(NAME) $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re

.SILENT:
