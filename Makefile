CC=gcc
CFLAGS=-Wall -Wextra -g
EXECNAME=chess
LDFLAGS=
LIBS=
srcdir=./src

# List of source files
sources = \
./src/main.c \
./src/pawn_attacks.c \
./src/utils.c \
./src/numc.c \
./src/constants.c \

OBJECTS = $(sources:.c=.o)
INCLUDES = -I./include

# Compile rule for generating object files
%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# This builds the executable even 
# when nothing is passed to 'make'
all: $(EXECNAME)

# Rule for linking the executable
$(EXECNAME): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^ $(LIBS)

# Clean
clean:
	rm -f $(OBJECTS) $(EXECNAME)