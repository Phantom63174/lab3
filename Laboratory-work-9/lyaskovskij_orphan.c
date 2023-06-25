#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void) {
int n = 25;
pid_t pid = fork();
if (pid == 0) {
int i;
for(i = 0; i < 2*n+1; i++) {
printf("Parent of Students Lyaskovskij PPID=%d\n", getppid());
sleep(1);
}
}
else {
sleep(n+1);
printf("The parent process has inexpectedly stopped.\n");
}
return EXIT_SUCCESS;
}
