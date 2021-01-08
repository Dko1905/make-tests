.POSIX:

include $(CONFIG_MK)

OBJECTS = log.o

all: $(OBJECTS)
# Suffix rule to compile source to objects.
.c.o:
	$(CC) $(MYCFLAGS) -I $(INC) -c $<
# Extra rules.
clean:
	rm -f $(OBJECTS)

.PHONY: all clean
