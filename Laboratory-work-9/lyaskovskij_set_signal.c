#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

pid_t pid = atoi(argv[1]);
int signal = SIGUSR2;

if (kill(pid, signal) == -1) {
perror("kill");
return 1;
}

return 0;
}
