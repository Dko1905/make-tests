.POSIX:

include config.mk

OBJECTS = main.o util.o

all: options sf

options:
	@echo Sf build options:
	@echo "CFLAGS  = $(MYCFLAGS)"
	@echo "LDFLAGS = $(MYLDFLAGS)"
	@echo "CC      = $(CC)"

.c.o:
	$(CC) $(MYCFLAGS) -c $<

sf: $(OBJECTS)
	$(CC) $(OBJECTS) -o sf $(MYLDFLAGS)

# Remove binary and object files
clean:
	rm -f sf $(OBJECTS)

# Install program
install: all
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f sf $(DESTDIR)$(PREFIX)/bin
	chmod +x $(DESTDIR)$(PREFIX)/bin/st
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/sf

.PHONY: all options clean install uninstall
