CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic 

NAME = forms
SRC = Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp main.cpp
#OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
#$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)
	$(RM) Home_shrubbery
	
re: fclean $(NAME)

.PHONY: all clean fclean re