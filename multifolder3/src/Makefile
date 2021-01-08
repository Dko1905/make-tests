.POSIX:

include $(CONFIG_MK)

OBJECTS = main.o

all: mf

# Suffix rule to compile source to objects.
.c.o:
	$(CC) $(MYCFLAGS) -I $(INC) -c $<
# Rule to compile subdirectores, each subdir must be separate.
util:
	$(MAKE) -C util CONFIG_MK=$(CONFIG_MK) INC=$(INC) all
liblog:
	$(MAKE) -C liblog CONFIG_MK=$(CONFIG_MK) INC=$(INC) all
# Rule to link binary from objects, must include subdirs.
mf: $(OBJECTS) util liblog
	$(CC) $(OBJECTS) util/*.o liblog/*.o -o mf $(MYLDFLAGS)
# Extra rules, remember subdirs.
clean:
	$(MAKE) -C util CONFIG_MK=$(CONFIG_MK) INC=$(INC) clean
	$(MAKE) -C liblog CONFIG_MK=$(CONFIG_MK) INC=$(INC) clean
	rm -f mf $(OBJECTS)
# Remember to decleare all subdirs phony.
.PHONY: all clean util liblog
