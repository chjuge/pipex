DIR		= 	src

SRCS	=	$(DIR)/main.c  \
			$(DIR)/utils.c	\
			$(DIR)/try_open.c \
			$(DIR)/ft_split.c \
			$(DIR)/get_path_env.c

OBJS	= 	$(SRCS:.c=.o)

HEAD	=	header/pipex.h

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

NAME	=	pipex

all:		$(NAME)

$(NAME):	$(OBJS) $(HEAD)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			chmod +x $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:		all

.PHONY:		all clean fclean re bonus