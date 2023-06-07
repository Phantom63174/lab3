#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libpq-fe.h"

int main (int argc, char * argv[]) {
    PGconn * conn;
    char db_name[32];
    char user_name[32];
    if (argc < 3) {
        fprintf(stderr, "Usage: %s database user\n", argv[0]);
        return EXIT_FAILURE;
     }
    strcpy(db_name, argv[1]);
    strcpy(user_name, argv[2]);
    conn = PQsetdbLogin(NULL,NULL,NULL,NULL,db_name,user_name,NULL);
    if (PQstatus(conn) == CONNECTION_OK)
         printf("Connection to database %s is successfull!\n", db_name);
    else {
         fprintf(stderr, "Connection to database %s failed: %s\n", db_name, PQerrorMessage(conn));
         return EXIT_FAILURE;
     }
    PQfinish(conn);
    return EXIT_SUCCESS;
}

