NAME		= 	claptrap

CXX			= 	c++
CXXFLAGS	= 	-Wall -Wextra -Werror -std=c++98

SRCS		:= 	main.cpp\
				ClapTrap.cpp\
				ScavTrap.cpp\
				FragTrap.cpp

HEADERS		:=	ClapTrap.hpp\
				ScavTrap.hpp\
				FragTrap.hpp

OBJDIR		:= 	obj
OBJ 		:= 	$(SRCS:%.cpp=$(OBJDIR)/%.o)


# ---------------------------------------------------------------------------- #
#                                  BASE RULES                                  #
# ---------------------------------------------------------------------------- #
all: $(NAME)

$(NAME): $(HEADERS) $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p '$(@D)'
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
