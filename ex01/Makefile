# Program:
NAME := phonebook

# Necessities
CXX := c++
CXXFLAGS := -std=c++98 -Wall -Wextra -Werror -pedantic

# Targets
SRC := Contact.cpp Phonebook.cpp main.cpp

# Rules
all: $(SRC)
	$(CXX) -o $(NAME) $(CXXFLAGS) -I. $(SRC)

clean:
	rm -rf $(NAME)