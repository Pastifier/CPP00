# Program:
NAME := megaphone

# Necessities
CXX := c++
CXXFLAGS := -std=c++98 -Wall -Wextra -Werror -pedantic

# Targets
SRC := megaphone.cpp

# Rules
all: $(NAME)

$(NAME): $(SRC)
	$(CXX) -o $@ $(CXXFLAGS) $(SRC)

clean:
	rm -rf $(NAME)