#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
char *args[] ={"cp" , "/etc/hosts" , "./"};
pid_t pid = fork();
if (pid != 0){
printf("I'm parent!\n");
sleep(1);
execv("/bin/cp",args);
}
else{
printf("The child of Students Lyaskovskij executes: cp\n");
}
return EXIT_SUCCESS;
}
