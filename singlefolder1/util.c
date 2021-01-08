#include <stdio.h>
#include <stdlib.h>

#include "util.h"

#define PRINTF_INT_BUFFER 10

static const char template[] = "Hello world, nr. %d";

char *create_messege(int number) {
	char *tmp = malloc(sizeof(template) + PRINTF_INT_BUFFER);
	if (tmp == NULL) {
		return NULL;
	}
	snprintf(tmp, sizeof(template) + PRINTF_INT_BUFFER, template, number);
	return tmp;
}
