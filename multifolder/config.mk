# version
VERSION = 0.1

# customize to fit your system
PKG_CONFIG = pkg-config

# paths
PREFIX = /usr/local

# global includes and libs
INCS = #`$(PKG_CONFIG) --cflags zlib`
LIBS = #`$(PKG_CONFIG) --libs zlib`

# flags
MYCPPFLAGS = -DVERSION=\"$(VERSION)\" # My Preprocessor
MYCFLAGS = -std=c99 -Wall -Wextra -pedantic \
           $(INCS) $(MYCPPFLAGS) $(CPPFLAGS) $(CFLAGS) # My C-flags
MYLDFLAGS = $(LIBS) $(LDFLAGS) # My LD flags
