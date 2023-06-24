CC = gcc
CFLAGS = -Wall -g
LIBDIR = componente
SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRC = $(wildcard $(SRCDIR)/*.c) $(LIBDIR)/src/suma.c
OBJ = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRC))
EXECUTABLE = $(BINDIR)/myprogram

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -I$(LIBDIR)/include -o $@ $<

clean:
	rm -rf $(OBJDIR)/*.o $(EXECUTABLE)

debug: $(EXECUTABLE)
	gdb $(EXECUTABLE)

