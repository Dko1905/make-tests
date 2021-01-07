#include <stdio.h>
#include <stdlib.h>

#include "util.h"

int main() {
	char *msg = create_messege(150);

	if (msg == NULL) {
		perror("Failed to create messege");
		return 1;
	}

	printf("Messge is %s\n", msg);

	free(msg);

	return 0;
}
