##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## cesaretti.enzo
##

CYAN		:=	\e[96m
REDBOLD		:=	\033[0;31;1m
GREENBOLD	:=	\033[0;32;1m
BOLD		:=	\033[1m
NORMAL		:=	\033[0m

BUILD_DIR 	:=	.build
SRC_DIR 	:=	src
LIB_DIR 	:=	lib

SRC			:=	$(shell find $(SRC_DIR) -name '*.c') \
				$(shell find $(LIB_DIR) -name '*.c')

OBJ 		:= 	$(patsubst %.c,$(BUILD_DIR)/%.o,$(SRC))

NAME		:=	my_hunter

LIBS		:=	-lcsfml-graphics -lcsfml-system -lcsfml-window

CC			:=	gcc

CFLAGS		:=	-W -Wall -Wextra -I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	@ $(CC) -g -o $(NAME) $(OBJ) $(LIBS)
	@ echo -e "${GREENBOLD}[Done] [BIN] Compilation end successfully${NORMAL}"

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	@ $(CC) $(CFLAGS) -c $< -o $@
	@ echo -e "${CYAN}[Done] '$<'${NORMAL}"

clean:
	@ $(RM) -rf $(BUILD_DIR)

fclean: clean
	@ $(RM) -f $(NAME)

re:	fclean all
