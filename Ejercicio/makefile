OBJ= A.o B.o C.o
DEF=*.h
CLSS=*.cpp
CC=g++
FLAGS= -Wall -ggdb
SOURCE= makefile
OUT= main


all: compile principal generate

compile: $(DEF)
	$(CC) -c $(CLSS) $(FLAGS)

principal: $(DEF)
	$(CC) -c main.cpp $(FLAGS)

generate:
	$(CC) main.o $(OBJ) -o $(OUT) $(FLAGS)

clean:
	rm -f $(OBJ) main.o $(OUT)
