#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>

static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

struct worker {
    int w_id;
    char name[20];
    char bday[20];
};

struct worker worker[2] = { { 1, "pasha", "20/04/2004" } };

void main(void) {
    pthread_t T1_thread, T2_thread;
    void *T1(), *T2();
    pthread_create(&T1_thread, NULL, T1, NULL);
    pthread_create(&T2_thread, NULL, T2, NULL);
    pthread_join(T1_thread, NULL);
    pthread_join(T2_thread, NULL);
}

void *T1() {
    for (int i = 1; i <= 3; i++) {
        pthread_mutex_lock(&mutex);
        printf("T1: Critical Region\n");
        printf("T1: Read[bday] = %s\n", worker[0].bday);
        sleep(1);
        strcpy(worker[0].bday, "15/07/2009");
        printf("T1: Write[bday] = %s\n", worker[0].bday);
        pthread_mutex_unlock(&mutex);
        printf("T1: Noncritical Region\n");
        sleep(1);
    }
}

void *T2() {
    sleep(1);
    for (int i = 1; i <= 3; i++) {
        pthread_mutex_lock(&mutex);
        printf("T2: Critical Region\n");
        printf("T2: Read[bday] = %s\n", worker[0].bday);
        sleep(1);
        strcpy(worker[0].bday, "21/04/2006");
        printf("T2: Write[bday] = %s\n", worker[0].bday);
        pthread_mutex_unlock(&mutex);
        printf("T2: Noncritical Region\n");
        sleep(1);
    }
}


