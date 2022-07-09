NAME 		= libft

BUFFER 		= 42
BSIZE 		= -D BUFFER_SIZE=$(BUFFER)
CC 			= gcc
FLAGS 		= -Wall -Wextra -Werror

SUBDIRS 	= ft_printf ft_printf/printers get_next_line
DIR_OBJ 	= ./obj

INCS 		= $(wildcard *.h $(foreach fd, $(SUBDIRS), $(fd)/*.h))
SRCS 		= $(wildcard *.c $(foreach fd, $(SUBDIRS), $(fd)/*.c))
OBJS 		= $(addprefix $(DIR_OBJ)/, $(SRCS:c=o))
INC_DIRS 	= -I./ $(addprefix -I, $(SUBDIRS))

LIBS 		= $(LIBFT) $(PRN)

$(NAME): $(OBJS) $(INCS)
	ar rcs $(NAME).a $(OBJS)

$(DIR_OBJ)/%.o: %.c $(INCS)
	mkdir -p $(@D)
	$(CC) $(BSIZE) -o $@ $(FLAGS) -c $< $(INC_DIRS)

all: $(NAME)

clean:
	rm -rf obj

aclean:
	rm -rf $(NAME).a

fclean: clean aclean

bonus: all

re: fclean all
