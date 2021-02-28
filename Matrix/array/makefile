
PATH_COMPILER 	:= C:\MinGW\bin

PATH_PRO		:= .
PATH_OBJ		:= $(PATH_PRO)/object
PATH_SRC		:= $(PATH_PRO)/src

CC 				:= $(PATH_COMPILER)/gcc
CFLAGS			:= -g -Wall

build: $(PATH_OBJ)/main.o
	$(CC) $(CFLAGS) $? -o $@

$(PATH_OBJ)/main.o: $(PATH_SRC)/main.c
	$(CC) -c $? -o $(PATH_OBJ)/main.o

run:
	./build.exe