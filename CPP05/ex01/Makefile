CXX = c++
CXXFLAGS = -Wall	-Wextra	-Werror	-std=c++98
RM = rm -f

SRC = main.cpp	Bureaucrat.cpp	Form.cpp
OBJ = $(SRC:.cpp=.o)
NAME = office_forms

all : $(NAME)

$(NAME)	: $(OBJ)
	$(CXX)	$(CXXFLAGS) $(OBJ)	-o	$(NAME)

%.o : %.cpp	Bureaucrat.hpp	Form.hpp
	$(CXX)	$(CXXFLAGS)	-c	$<	-o	$@

clean :
	$(RM)	$(OBJ)

fclean : clean
	$(RM)	$(NAME)

re : fclean	all
