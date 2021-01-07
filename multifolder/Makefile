.POSIX:

include config.mk

all: options mf

options:
	@echo Mf build options:
	@echo "CFLAGS  = $(MYCFLAGS)"
	@echo "LDFLAGS = $(MYLDFLAGS)"
	@echo "CC      = $(CC)"

mf:
	$(MAKE) -C src CONFIG_MK="`pwd`/config.mk" all
	cp src/mf mf

clean:
	$(MAKE) -C src CONFIG_MK="`pwd`/config.mk" clean

.PHONY: all options mf clean
