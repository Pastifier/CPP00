# Program
NAME := account

# Necessities

CXX := c++
CXXFLAGS := -std=c++98 -Wall -Wextra -Werror -pedantic

# Targets

SRC := Account.cpp tests.cpp
INCLUDE := Account.hpp

# Rules

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CXX) -o $@ $(CXXFLAGS) -I. $(SRC)

clean:
	rm -rf $(NAME)
