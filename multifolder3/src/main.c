#include <stdio.h>

#include "include/util/hello.h"
#include "include/liblog/err.h"

int main() {
	say_hello();
	info_hello();

	err("Hello error!");

	return 0;
}
