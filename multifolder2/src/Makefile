.POSIX:

include $(CONFIG_MK)

OBJECTS = main.o

all: mf

# Suffix rule to compile source to objects.
.c.o:
	$(CC) -I $(INC) $(MYCFLAGS) -c $<
# Rule to compile subdirectores, each subdir must be separate.
util:
	$(MAKE) -C util CONFIG_MK=$(CONFIG_MK) INC=$(INC) all
# Rule to link binary from objects, must include subdirs.
mf: $(OBJECTS) util
	$(CC) $(OBJECTS) util/*.o -o mf $(MYLDFLAGS)
# Extra rules, remember subdirs.
clean:
	$(MAKE) -C util CONFIG_MK=$(CONFIG_MK) INC=$(INC) clean
	rm -f mf $(OBJECTS)
# Remember to decleare all subdirs phony.
.PHONY: all clean util
