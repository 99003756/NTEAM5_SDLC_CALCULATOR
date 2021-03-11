# target: test_main.c main.c unity/unity.c
# 	gcc test_main.c main.c unity/unity.c -I ./unity

# Name of the project
PROJECT_NAME = Calculator

# Output directory
BUILD = build

SRC = test/test_main.c\
src/main.c\
unity/unity.c


INC	= -Iinc\
-Iunity

#

INCLUDE_LIBS =


PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html


$(PROJECT_NAME):all


.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm


run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out


clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)


$(BUILD):
	mkdir build
