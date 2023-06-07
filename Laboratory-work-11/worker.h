#include <stdio.h>
#include <stdlib.h>
#include "libpq-fe.h"

PGconn* connect_worker (void);
ExecStatusType remove_worker(PGconn* conn);
ExecStatusType add_worker(PGconn* conn);
ExecStatusType get_worker(PGconn* conn);
