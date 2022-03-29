PROJ_NAME = Sudoku
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

TEST_SRC = test_sudoku.c\
unity/unity.c


SRC = src/printings.c\
src/secures.c\
src/solv.c

INC = -Iinc\
-Iunity



ifdef OS
RM = del /q
FixPath = $(subst /,\,$1)
EXEC = exe
else
	ifeq ($(shell uname), Linux)
     RM = rm -rf
     FixPath = $1
     EXEC = out
   endif
endif

.PHONY : all run clean doc

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)



doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html

