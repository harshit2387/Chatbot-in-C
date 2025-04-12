CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
SRC = src/main.c src/chatbot.c src/google_api.c
OBJ = $(SRC:.c=.o)
TARGET = chatbot

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean