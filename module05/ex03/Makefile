CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic 

NAME = intern
SRC = Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp Intern.cpp \
		RobotomyRequest.cpp PresidentialPardonForm.cpp main.cpp
#OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
#$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)
	$(RM) Fred_shrubbery
	
re: fclean $(NAME)

.PHONY: all clean fclean re