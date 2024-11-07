NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinc
SRC_DIR = src
OBJ_DIR = obj
SRCS = $(SRC_DIR)/ft_printf.c \
       $(SRC_DIR)/ft_utils_str.c \
       $(SRC_DIR)/ft_utils_hex.c \
       $(SRC_DIR)/ft_utils_int.c

OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo " ✔ 📚 $(NAME) static library created"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo " ✔ 📁 $@📃 file created"

clean:
	@rm -rf $(OBJ_DIR)
	@echo " ✔ 🧹 📁 Object directory cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo " ✔ 🧹 📚 $(NAME) static library cleaned"

re: fclean all
	@echo " ✔ 🛠️  Project rebuilded"

.PHONY: all clean fclean re