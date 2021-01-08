#include <stdio.h>

#include "include/util/hello.h"
#include "include/liblog/log.h"

void say_hello() {
	printf("Hello, world!\n");
}

void info_hello() {
	info("Hello world!");
}
