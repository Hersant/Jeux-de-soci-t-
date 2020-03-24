CXX			:= -g++
CXXFLAGS	:= -std=c++11 -Wall -Wfatal-errors -Wextra -Werror
BUILD		:= ./build
OBJ_DIR		:= $(BUILD)/objects
APP_DIR		:= $(BUILD)/apps
TARGET		:= main
INCLUDE		:= -Iinclude/
SRC			:= $(wildcard src/*.cpp)

OBJECTS		:= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: build $(APP_DIR)/$(TARGET)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@ $(LFLAGS)

$(APP_DIR)/$(TARGET): $(OBJECTS)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $(APP_DIR)/$(TARGET) $^ $(LFLAGS)

.PHONY: all build clean debug release

build:
	@mkdir -p $(APP_DIR)
	@mkdir -p $(OBJ_DIR)

debug: CXXFLAGS += -DEBUG -g
debug: all

release: CXXFLAGS += -02
release: all

clean:
	-@rm -rvf $(OBJ_DIR)/*
	-@rm -rvf $(APP_DIR)/*
