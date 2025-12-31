CXX = c++	
CXXFLAGS = -Wall	-Wextra	-Werror	-std=c++98
RM = rm -f

SRC = main.cpp	Bureaucrat.cpp	AForm.cpp	ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp	PresidentialPardonForm.cpp
OBJ = $(SRC:.cpp=.o)
NAME = execute_forms

all : $(NAME)

$(NAME)	: $(OBJ)
	$(CXX)	$(CXXFLAGS) $(OBJ)	-o	$(NAME)

%.o : %.cpp	Bureaucrat.hpp	AForm.hpp	ShrubberyCreationForm.hpp	RobotomyRequestForm.hpp	PresidentialPardonForm.hpp
	$(CXX)	$(CXXFLAGS)	-c	$<	-o	$@

clean :
	$(RM)	$(OBJ)

fclean : clean
	$(RM)	$(NAME)	*_shrubbery

re : fclean	all
