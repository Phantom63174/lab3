#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
int data_processed;
char buffer[BUFSIZ + 1];
int file_descriptor;

memset(buffer, '\0', sizeof(buffer));
sscanf(argv[1], "%d", &file_descriptor);
data_processed = read(file_descriptor, buffer, BUFSIZ);
printf("I'm child process of Lyaskovskij with pid=%d.\n",getpid());
printf("I read %d bytes; %s. \n", data_processed, buffer);
return EXIT_SUCCESS;
}
