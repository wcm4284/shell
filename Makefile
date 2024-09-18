MESSAGE ?= another commit
TARGET ?= run

CC := gcc
CFLAGS := -Wall -g

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

all: $(TARGET)


run: $(OBJS)
	@gcc -o main $(OBJS)
	@./main

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo compiling $<

clean:
	@rm main *.o

push: run
	@git pull
	@git add *.c
	@git add Makefile
	@git add *.h
	@git commit -m "$(MESSAGE)"
	@git push


