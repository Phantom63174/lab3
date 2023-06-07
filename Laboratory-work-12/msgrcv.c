#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/msg.h>
struct my_msg_st {
    long int my_msg_type;
    char some_text [BUFSIZ];
};

int main(void) {
    int msgid;
    struct my_msg_st my_data;
    msgid = msgget((key_t)1009, 0777 | IPC_CREAT);
    if (msgid == -1) {
        fprintf(stderr, "msgget failed with error: %dn", errno);
        return EXIT_FAILURE;
    }
    if (msgrcv(msgid, (void *)&my_data, BUFSIZ, 0, 0) == -1) {
        fprintf(stderr, "msgrcv failed with error: %dn", errno);
        return EXIT_FAILURE;
    }
    printf("I recieved message: %s\n", my_data. some_text);
    if (msgctl (msgid, IPC_RMID, 0) == -1) {
        fprintf(stderr, "msgct1 (IPC_RMID) failedn");
        return EXIT_FAILURE;
    }
return EXIT_SUCCESS;
}

