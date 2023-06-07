GCC = gcc -Wall
INCLUDE = -I/usr/include
LIB = -L/usr/lib64 -lpq
OBJ = connect_worker.o worker.o remove_worker.o add_worker.o get_worker.o
worker: $(OBJ)
	$(GCC) $(OBJ) -o worker $(INCLUDE) $(LIB)
worker.o: worker.c
	$(GCC) -c -o worker.o worker.c $(INCLUDE) $(LIB)
connect_worker.o: connect_worker.c
	$(GCC) -c -o connect_worker.o connect_worker.c $(INCLUDE) $(LIB)
remove_worker.o: remove_worker.c
	$(GCC) -c -o remove_worker.o remove_worker.c $(INCLUDE) $(LIB)
add_worker.o: add_worker.c
	$(GCC) -c -o add_worker.o add_worker.c $(INCLUDE) $(LIB)
get_worker.o: get_worker.c
	$(GCC) -c -o get_worker.o get_worker.c $(INCLUDE) $(LIB)
install:
	cp ./worker /home/lyaskovskij/bin
clean:
	rm -f *.o
	rm -f worker


