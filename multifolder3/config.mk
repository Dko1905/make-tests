# version
VERSION = 0.1

# customize to fit your system
PKG_CONFIG = pkg-config

# paths
PREFIX = /usr/local

# flags
MYCPPFLAGS = -DVERSION=\"$(VERSION)\" # My Preprocessor
MYCFLAGS = -std=c99 -Wall -Wextra -pedantic \
           $(MYCPPFLAGS) $(CPPFLAGS) $(CFLAGS) # My C-flags
MYLDFLAGS = $(LDFLAGS) # My LD flags
