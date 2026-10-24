CXX      ?= g++
CXXFLAGS = -std=c++17 -O2 -g -Wall -Wextra -Isrc
SRC      = src/main.cpp src/systems/login.cpp src/systems/world.cpp src/systems/movement.cpp src/systems/npc.cpp src/core/mysql_db.cpp
HDRS    := $(shell find src -name '*.hpp' -o -name '*.cpp' | sort)
BIN      = conquer_server

all: $(BIN)
$(BIN): $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(BIN) -pthread -lmariadb
clean:
	rm -f $(BIN)
.PHONY: all clean
