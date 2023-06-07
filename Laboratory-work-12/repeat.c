#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>

int main(void) {
     pthread_t f2_thread, f1_thread;
     void *f2(), *f1();
     int i1 = 10, i2 = 10;
     pthread_create(&f1_thread, NULL, f1, &i1);
     pthread_create(&f2_thread, NULL, f2, &i2);
     pthread_join(f1_thread, NULL); pthread_join(f2_thread, NULL);
     return 0;
}

void *f1() {
    int i;
    for (i=1;i<7;i++) {
        printf("f1: lyaskovskij\n");
        sleep (1);
    }
    pthread_exit(0);
}
void *f2 () {
    int i;
    for (i=1;i<7;i++) {
        printf("f2: lyaskovskij\n");
        sleep (1);
    }
pthread_exit(0);
}


