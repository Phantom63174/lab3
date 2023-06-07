#include "worker.h"
#include <stdio.h>
#include "libpq-fe.h"

ExecStatusType add_worker(PGconn* conn) {
    PGresult *res;

    res = PQexec(conn, "START TRANSACTION");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "START TRANSACTION failed: %s\n", PQerrorMessage(conn));
        PQclear(res);
        return PGRES_BAD_RESPONSE;
    }
    printf("START TRANSACTION command executed successfully.\n");
    PQclear(res);

    res = PQexec(conn, "LOCK TABLE worker IN EXCLUSIVE MODE");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "LOCK TABLE failed: %s\n", PQerrorMessage(conn));
        PQclear(res);
        return PGRES_BAD_RESPONSE;
    }
    printf("LOCK TABLE command executed successfully.\n");
    PQclear(res);

    res = PQexec(conn, "INSERT INTO worker VALUES (4, 'Lyaskovskij', '01/05/2001')");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "INSERT failed: %s\n", PQerrorMessage(conn));
        PQclear(res);
        return PGRES_BAD_RESPONSE;
    }
    printf("INSERT command executed successfully.\n");
    PQclear(res);

    res = PQexec(conn, "COMMIT");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "COMMIT failed: %s\n", PQerrorMessage(conn));
        PQclear(res);
        return PGRES_BAD_RESPONSE;
    }
    printf("COMMIT command executed successfully.\n");
    PQclear(res);

    printf("Adding worker is successful!\n");
    return PGRES_COMMAND_OK;
}


