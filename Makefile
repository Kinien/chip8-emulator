# --- Variables ---
CC      = gcc
TARGET  = chip8
SRC     = main.c chip8.c
OBJ     = $(SRC:.c=.o)

CFLAGS  = -std=c11 -Wall -Wextra -Wpedantic -g

# := evaluates once, when make reads the file (avoids re-running sdl2-config)
SDL_CFLAGS := $(shell sdl2-config --cflags)
SDL_LIBS   := $(shell sdl2-config --libs)

# --- Default target ---
all: $(TARGET)

# --- Linking: .o -> executable (CFLAGS included so sanitizers link too) ---
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(SDL_LIBS)

# --- Compiling: .c -> .o ---
%.o: %.c chip8.h
	$(CC) $(CFLAGS) $(SDL_CFLAGS) -c $< -o $@

# --- Debug build with sanitizers ---
debug: CFLAGS += -fsanitize=address,undefined -O0
debug: clean $(TARGET)

# --- Cleanup ---
clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all debug clean
