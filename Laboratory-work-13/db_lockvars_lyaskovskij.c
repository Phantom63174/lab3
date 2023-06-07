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

struct worker worker[2] = { {1, "Lyaskovskij", "22/11/2011" }, {2, "Patalashko", "01/01/2011" } };

void main(void) {
        pthread_t T1_thread, T2_thread;
        void *T1(), *T2();
        pthread_create(&T1_thread, NULL, T1, NULL);
        pthread_create(&T2_thread, NULL, T2, NULL);
        pthread_join(T1_thread, NULL);
        pthread_join(T2_thread, NULL);
}
void *T1() {
    for (int i=1; i<=3;i++){
        while (turn != 0);
        sleep(2);
        turn = 1;
        printf("T1: Critical Region\n");
        printf("T1: Read[w_id]=%d\n",worker[0].w_id);
        sleep(1);
        worker[0].w_id = 3;
        printf("T1: Write[w_id]=%d\n",worker[0].w_id);
        sleep(1);
        turn = 0;
        printf("T1: Noncritical Region\n");
        sleep(1);
    }
}
void *T2() {
    sleep(1); // T2 стартує пізніше Т1
    for (int i=1;i<=3;i++) {
        while (turn != 0);
        turn = 1;
        printf("T2: Critical Region\n");
        printf("T2: Read[w_id]=%d\n",worker[0].w_id);
        sleep(1);
        worker[0].w_id = 5;
        printf("T2: Write[w_id]=%d\n",worker[0].w_id);
        sleep(1);
        turn = 0;
        printf("T2: Noncritical Region\n");
        sleep(1);
    }
}
