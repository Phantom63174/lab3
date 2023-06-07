#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>

int turn = 0;

struct worker {
    int w_id;
    char name[20];
    char bday[20];
};

struct worker worker[2] = { {1, "Lyaskovskij", 23/12/2021 }, {2, "Vova", 11/12/1900 }};

int main(void) {
        pthread_t t1_thread, t2_thread;
        void *T1(), *T2();
        pthread_create(&t1_thread, NULL, T1, NULL);
        pthread_create(&t2_thread, NULL, T2, NULL);
        pthread_join(t1_thread, NULL);
        pthread_join(t2_thread, NULL);
        return 0;
}
void *T1() {
    for (int i = 1; i <=3; i++) {
        while(turn != 0);
        sleep(2);
        printf("T1: Critical Region.\n");
        printf("T1: Read[w_id]=%d\n",worker[0].w_id);
        sleep(1);
        worker[0].w_id = 3;
        printf("T1: Write[w_id]=%d\n",worker[0].w_id);
        sleep(1);
        turn = 1;
        printf("T1: Noncritical Region.\n");
    }
}

void *T2() {
    for (int i = 1; i <=3; i++) {
        sleep(1);
        while(turn == 0);
        printf("T2: Critical Region.\n");
        sleep(3);
        printf("T2: Read[w_id]=%d\n",worker[0].w_id);
        sleep(1);
        worker[0].w_id = 5;
        printf("T2: Write[w_id]=%d\n",worker[0].w_id);
        sleep(1);
        turn = 0;
        printf("T2: Noncritical Region.\n");
    }
}
