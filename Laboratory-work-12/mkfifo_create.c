#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
	int fd;
	char buffer[256];
	char* NAMEDPIPE_NAME = "lyaskovskij";
	if ( mkfifo(NAMEDPIPE_NAME, 0660) ) {
		fprintf(stderr,"Error in mkfifo!\n");
		return 1;
	}
	printf("%s is created\n", NAMEDPIPE_NAME);

	if ( (fd = open(NAMEDPIPE_NAME, O_RDONLY)) <= 0 ) {
		fprintf(stderr, "Error in open!");
		return 1;
	}
	printf("%s is opened\n", NAMEDPIPE_NAME);

	char* command = "who -u -p";
	write(fd, command, strlen(command));
	system("who -u -p > output.txt");

	FILE* file = fopen("output.txt", "r");
    	if (file == NULL) {
        	fprintf(stderr, "Error in opening file!\n");
        	return 1;
    	}
	while (fgets(buffer, sizeof(buffer), file) != NULL) {
		printf("%s", buffer);
	}
	fclose(file);
	close(fd);
	remove("output.txt");
	remove(NAMEDPIPE_NAME);
	return 0;
}


