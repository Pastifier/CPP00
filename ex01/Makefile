# Program:
NAME := phonebook

# Necessities
CXX := c++
CXXFLAGS := -std=c++98 -Wall -Wextra -Werror -pedantic

# Targets
SRC := Contact.cpp Phonebook.cpp main.cpp
INCLUDE := Contact.hpp Phonebook.hpp

# Rules
all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CXX) -o $@ $(CXXFLAGS) -I. $(SRC)

clean:
	rm -rf $(NAME)