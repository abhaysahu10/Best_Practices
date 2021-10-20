#Target_name : Dependencies
#<TAB>Command

# Name of the Project
PROJT_NAME = Coordinates
TEST_PROJT_NAME = Test_$(PROJT_NAME)

# Output directory
BUILD = build

CC = gcc

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
	MOVE = move
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
			MOVE = mv
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

# Main file name
MAIN_NAME = main.c

# All source code files
SRC = src/CheckQuardant.c\
src/OriginDistance.c

# All test source files
TEST_SRC = unit_test/coordinate_test.c\
unity/unity.c\

# All include folders with header files
INC = -Iinc\
-Iunity\


$(PROJT_NAME): all

CFLAGS = -I$(INC)

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY: all test coverage run clean doc

all: $(SRC) $(BUILD)
	gcc $(MAIN_NAME) $(SRC) $(INC) -o $(call FixPath,$(BUILD)/$(PROJT_NAME).$(EXEC)) -lm

run: $(PROJT_NAME)
	$(call FixPath,$(BUILD)/$(PROJT_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC) $(BUILD)
	gcc $(SRC) $(TEST_SRC) $(INC) -o $(call FixPath,$(BUILD)/$(TEST_PROJT_NAME).$(EXEC)) -lm
	$(call FixPath,$(BUILD)/$(TEST_PROJT_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(BUILD)/*)
	make clean -C doc
	rmdir $(BUILD) doc/html

$(BUILD):
	mkdir build




