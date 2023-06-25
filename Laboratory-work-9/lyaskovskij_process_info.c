#include <stdio.h>
#include <unistd.h>

int main (void)
{
      fprintf(stdout,"My Process ID Group=%d\n",getpgrp());
      fprintf(stdout,"My Process ID=%d\n",getpid());
      fprintf(stdout,"My Parent ProcessID=%d\n",getppid());
      fprintf(stdout,"My User Process=%d\n",getuid());
      fprintf(stdout,"My User Group Process ID=%d\n",getgid());

      return 0;

}
