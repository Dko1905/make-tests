#include <stdio.h>
#include <stdarg.h>

#include "include/liblog/err.h"

void err(const char *fmt, ...) {
	va_list va;

	va_start(va, fmt);

	fprintf(stderr, "ERR: ");
	vfprintf(stderr, fmt, va);
	fprintf(stderr, "\n");

	va_end(va);
}
