DIR		= 	src

SRCS	=	$(DIR)/pipex.c  \
			$(DIR)/utils.c	\
			$(DIR)/try_open.c \
			$(DIR)/ft_split.c \
			$(DIR)/fill_cmd_line.c \
			$(DIR)/child_and_parent.c \
			$(DIR)/find_count_of_lines.c \
			$(DIR)/get_full_path.c \
			$(DIR)/parse_path.c \
			$(DIR)/ft_strjoin.c \
			$(DIR)/free_all.c

OBJS	= 	$(SRCS:.c=.o)

HEAD	=	header/pipex.h

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

NAME	=	pipex

all:		$(NAME)

$(NAME):	$(OBJS) $(HEAD)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all


.PHONY:		all clean fclean re