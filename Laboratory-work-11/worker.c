#include "worker.h"

int main(void) {
PGconn* conn = connect_worker();
if(conn == NULL)
return EXIT_FAILURE;

 ExecStatusType remove_status = remove_worker(conn);
    if (remove_status != PGRES_COMMAND_OK) {
        fprintf(stderr, "Deleting worker failed.\n");
        PQfinish(conn);
        return EXIT_FAILURE;
    }

    ExecStatusType add_status = add_worker(conn);
    if (add_status != PGRES_COMMAND_OK) {
        fprintf(stderr, "Adding worker failed.\n");
        PQfinish(conn);
        return EXIT_FAILURE;
    }

  ExecStatusType get_status = get_worker(conn);
    if (get_status != PGRES_COMMAND_OK) {
        fprintf(stderr, "Getting worker failed.\n");
        PQfinish(conn);
        return EXIT_FAILURE;
    }

PQfinish(conn);
return EXIT_SUCCESS;
}
