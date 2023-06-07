#include "worker.h"
#include <stdio.h>
#include "libpq-fe.h"

ExecStatusType get_worker(PGconn* conn) {
    PGresult *res;

    res = PQexec(conn, "START TRANSACTION");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "START TRANSACTION failed: %s\n", PQerrorMessage(conn));
        PQclear(res);
        return PGRES_BAD_RESPONSE;
    }
    printf("START TRANSACTION command executed successfully.\n");
    PQclear(res);

    res = PQexec(conn, "LOCK TABLE worker IN SHARE MODE");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "LOCK TABLE failed: %s\n", PQerrorMessage(conn));
        PQclear(res);
        return PGRES_BAD_RESPONSE;
    }
    printf("LOCK TABLE command executed successfully.\n");
    PQclear(res);

    res = PQexec(conn, "SELECT w_id, name, bday FROM worker");
    if (PQresultStatus(res) != PGRES_TUPLES_OK) {
        fprintf(stderr, "SELECT failed: %s\n", PQerrorMessage(conn));
        PQclear(res);
        return PGRES_BAD_RESPONSE;
    }

    printf("SELECT command executed successfully. Results:\n");
    printf("%-10s\t%-12s%-10s\n", "w_id", "name", "bday");

    for (int i = 0; i < PQntuples(res); i++)
        printf("%-10s\t%-12s%-10s", PQgetvalue(res, i, 0), PQgetvalue(res, i, 1), PQgetvalue(res, i, 2));
    printf("\n");
    PQclear(res);

    res = PQexec(conn, "COMMIT");
    if (PQresultStatus(res) != PGRES_COMMAND_OK) {
        fprintf(stderr, "COMMIT failed: %s\n", PQerrorMessage(conn));
        PQclear(res);
        return PGRES_BAD_RESPONSE;
    }
    printf("COMMIT command executed successfully.\n");
    PQclear(res);

    return PGRES_COMMAND_OK;
}

