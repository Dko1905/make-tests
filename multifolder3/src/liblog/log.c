#include <stdio.h>
#include <stdarg.h>

#include "include/liblog/log.h"

void info(const char *fmt, ...) {
	va_list va;

	va_start(va, fmt);

	printf("LOG: ");
	vprintf(fmt, va);
	printf("\n");

	va_end(va);
}
