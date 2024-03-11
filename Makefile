CF=gcc
CFLAGS=-Wall -Wextra -g
LDFLAGS=
execname=chess
srcdir=./src
includedir=./include

# Use a variable for the object directory
objdir=$(srcdir)

# List of source files
sources=$(srcdir)/knight_attacks.c $(srcdir)/bitboard_utils.c $(srcdir)/numc.c

# Generate the list of object files by replacing .c with .o
objects=$(patsubst $(srcdir)/%.c,$(objdir)/%.o,$(sources))

a.out: $(objects)
	$(CF) $(CFLAGS) -o $(execname) $(objects) $(LDFLAGS)

# Pattern rule to build object files in ./src
$(objdir)/%.o: $(srcdir)/%.c
	$(CF) $(CFLAGS) -c $< -o $@ -I$(includedir)

.PHONY: clean
clean:
	rm -rf $(objdir)/*.o
	rm -f $(execname)
