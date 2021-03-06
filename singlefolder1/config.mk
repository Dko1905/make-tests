# Version
VERSION = 0.1

# Customize to fit your system
PKG_CONFIG = 

# Paths
PREFIX = /usr/local

# Includes and libs
INCS = #`$(PKG_CONFIG) --cflags zlib`
LIBS = #`$(PKG_CONFIG) --libs zlib`

# Flags
MYCPPFLAGS = -DVERSION=\"$(VERSION)\" # My Preprocessor
MYCFLAGS = -std=c99 -Wall -Wextra -pedantic \
           $(INCS) $(MYCPPFLAGS) $(CPPFLAGS) $(CFLAGS) # My C-flags
MYLDFLAGS = $(LIBS) $(LDFLAGS) # My LD flags
