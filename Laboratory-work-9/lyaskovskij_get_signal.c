#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void sig_handler(int signo)
{
if (signo == SIGUSR2)
printf("The Lyaskovskij process has received a signal\n");
}

int main(void)
{
if (signal(SIGUSR2, sig_handler) == SIG_ERR) {
printf("Signal error");
return EXIT_FAILURE;
}

printf("Waiting the signal...\n");
while(1)
sleep(1);

return EXIT_SUCCESS;
}
