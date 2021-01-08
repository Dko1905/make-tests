#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main() {
	char *msg = create_message(150);

	if (msg == NULL) {
		perror("Failed to create message");
		return 1;
	}

	printf("Message is %s\n", msg);

	free(msg);

	return 0;
}
