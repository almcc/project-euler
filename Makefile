# ==============================

CPPCHECK = cppcheck

# Output Files
# ==============================

CPPCHECK_RESULTS = cppcheck-results.xml
CPPUNIT_RESULTS = cppunit-results.xml

# Compiler Settings
# ==============================

CC = g++
CC_INCLUDES = -Isrc/common/ -I/usr/local/include/ -I/usr/include/ -Isrc/test/common
CC_FLAGS = -g -Wall

# Directories
# ==============================

SRC_DIR = src/
OBJ_DIR = obj/
BIN_DIR = bin/

VPATH = $(SRC_DIR)

# All sources and objects
# ==============================

SRCS = $(shell for file in `find src -name *.cpp`; do echo $$file; done)
OBJS = $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(SRCS:.cpp=.o))

# Objects per directory
# ==============================

PROBLEM_MAIN_SRC = src/mains/problems-main.cpp
UNITTEST_MAIN_SRC = src/mains/cppunit-main.cpp

COMMON_SRCS = $(shell for file in `find src/common -name *.cpp`; do echo $$file; done)
COMMON_HDRS = $(shell for file in `find src/common -name *.h`; do echo $$file; done)
COMMON_OBJS = $(patsubst src/common%,obj/common%,$(COMMON_SRCS:.cpp=.o))

TEST_SRCS = $(shell for file in `find src/test -name *.cpp`; do echo $$file; done)
TEST_HDRS = $(shell for file in `find src/test -name *.h`; do echo $$file; done)
TEST_OBJS = $(patsubst src/test%,obj/test%,$(TEST_SRCS:.cpp=.o))

# Bin specific Objects
# ==============================

PROBLEM_MAIN_OBJS = $(COMMON_OBJS) obj/mains/problems-main.o
UNITTEST_MAIN_OBJS = $(COMMON_OBJS) $(TEST_OBJS) obj/mains/cppunit-main.o

# Targets
# ==============================

.PHONY : new fresh clean vars cppunit cppunit-ci cppcheck-ci ci

new: $(BIN_DIR)problems

fresh: clean new

clean:
	@echo "Cleaning $(OBJ_DIR), $(BIN_DIR) and C.I. result files."
	@rm -rf $(OBJ_DIR)
	@rm -rf $(BIN_DIR)
	@rm -f $(CPPUNIT_RESULTS)
	@rm -f $(CPPCHECK_RESULTS)

vars:
	@echo "SRCS:"
	@echo "  $(SRCS)"
	@echo "OBJS:"
	@echo "  $(OBJS)"
	@echo "COMMON_OBJS:"
	@echo "  $(COMMON_OBJS)"
	@echo "TEST_OBJS:"
	@echo "  $(TEST_OBJS)"
	@echo "PROBLEM_MAIN_OBJS:"
	@echo "  $(PROBLEM_MAIN_OBJS)"
	@echo "UNITTEST_MAIN_OBJS:"
	@echo "  $(UNITTEST_MAIN_OBJS)"

cppunit: $(BIN_DIR)cppunit
ifdef TEST_SUITE
	@echo "Running $(TEST_SUITE) test suite"
	./$(BIN_DIR)cppunit --suite $(TEST_SUITE)
else
	@echo "Running all test suites"
	./$(BIN_DIR)cppunit
endif

cppunit-ci: $(BIN_DIR)cppunit
	@echo "Running unit tests."
	@$(BIN_DIR)cppunit --xml

cppcheck:
	@echo "Running cppcheck on sources and headers."
	@$(CPPCHECK) --quiet --enable=all --suppress=missingInclude -Isrc/common/ $(PROBLEM_MAIN_SRC) $(COMMON_SRCS) $(COMMON_HDRS)

cppcheck-ci:
	@echo "Running cppcheck on sources and headers."
	@rm -f $(CPPCHECK_RESULTS)
	@$(CPPCHECK) --quiet --enable=all --xml --suppress=missingInclude -Isrc/common/ $(PROBLEM_MAIN_SRC) $(COMMON_SRCS) $(COMMON_HDRS) 2> $(CPPCHECK_RESULTS)

ci: fresh cppunit-ci cppcheck-ci

# Linking
# ==============================

$(BIN_DIR)problems: $(PROBLEM_MAIN_OBJS)
	@echo "Linking PROBLEM_MAIN_OBJS into $@"
	@mkdir -p $(BIN_DIR)
	@$(CC) $(PROBLEM_MAIN_OBJS) -o $@

$(BIN_DIR)cppunit: $(UNITTEST_MAIN_OBJS)
	@echo "Linking UNITTEST_MAIN_OBJS into $@"
	@mkdir -p $(BIN_DIR)
	@$(CC) $(UNITTEST_MAIN_OBJS) -lcppunit -o $@

# Compiling Mains
# ==============================
# Compiling mains separately as there is no header file for main files.

$(OBJ_DIR)mains/problems-main.o: $(SRC_DIR)mains/problems-main.cpp
	@echo "Compling $< into $@"
	@mkdir -p $(dir $@)
	@$(CC) $(CC_FLAGS) $(CC_INCLUDES) -c $< -o $@

$(OBJ_DIR)mains/cppunit-main.o: $(SRC_DIR)mains/cppunit-main.cpp
	@echo "Compling $< into $@"
	@mkdir -p $(dir $@)
	@$(CC) $(CC_FLAGS) $(CC_INCLUDES) -c $< -o $@

# Compiling Standard Classes
# ==============================
# Compiling section, using VPATH = $(SRC_DIR) to allow different obj and src dirs.

$(OBJ_DIR)%.o: %.cpp %.h
	@echo "Compling $< into $@"
	@mkdir -p $(dir $@)
	@$(CC) $(CC_FLAGS) $(CC_INCLUDES) -c $< -o $@





