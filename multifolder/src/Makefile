.POSIX:

include $(CONFIG_MK)

OBJECTS = main.o

all: mf

.c.o:
	$(CC) $(MYCFLAGS) -c $<

mf: $(OBJECTS)
	$(CC) $(OBJECTS) -o mf $(MYLDFLAGS)

clean:
	rm -f mf $(OBJECTS)

.PHONY: all clean
