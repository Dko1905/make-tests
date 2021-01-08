.POSIX:

include config.mk

all: options mf

options:
	@echo Mf build options:
	@echo "CFLAGS  = $(MYCFLAGS)"
	@echo "LDFLAGS = $(MYLDFLAGS)"
	@echo "CC      = $(CC)"

mf:
	$(MAKE) -C src CONFIG_MK="`pwd`/config.mk" INC="`pwd`/include" all
	cp src/mf mf

clean:
	rm -f mf
	$(MAKE) -C src CONFIG_MK="`pwd`/config.mk" INC="`pwd`/include" clean

.PHONY: all options mf clean
