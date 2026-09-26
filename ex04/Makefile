NAME	= replace
SRC		= main.cpp
OBJ_DIR	= obj
OBJ		= $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -fr $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) test.txt.replace

re: fclean all

run: $(NAME)
	./$(NAME) test.txt "evaluation" "hackathon"

.PHONY: all clean fclean re run
