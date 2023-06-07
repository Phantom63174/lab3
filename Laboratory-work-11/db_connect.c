#include <stdio.h>
#include <stdlib.h>
#include "libpq-fe.h"

int main (void)
{
    PGconn * conn;
    char db_name[] = "lyaskovskij";
    char user_name[] = "lyaskovskij";

    conn = PQsetdbLogin(NULL,NULL,NULL,NULL,db_name,user_name,NULL);
    if (PQstatus(conn) == CONNECTION_OK)
         printf("Connection to database %s is successfull!\n", db_name);
    else
     {
         fprintf(stderr, "Connection to database %s failed: %s\n", db_name, PQerrorMessage(conn));
         return EXIT_FAILURE;
     }
    PQfinish(conn);
    return EXIT_SUCCESS;
}

