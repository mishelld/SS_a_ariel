.PHONY: all loops loopd recursives recursived clean
CC = gcc
AR = ar
OBJECTS_LOOP = basicClassification.o advancedClassificationLoop.o
OBJECTS_RECU = basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall -g





mains: main.o libclassrec.a
	$(CC) $(FLAGS)  -o mains main.o libclassrec.a 
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS)  -o maindloop main.o ./libclassloops.so 
maindrec: main.o libclassrec.so 
	$(CC) $(FLAGS)  -o maindrec main.o ./libclassrec.so 
loops: $(OBJECTS_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOP)
recursives: $(OBJECTS_RECU)
	$(AR) -rcs libclassrec.a $(OBJECTS_RECU)
recursived: $(OBJECTS_RECU)
	$(CC) -shared -o libclassrec.so $(OBJECTS_RECU) 
loopd: $(OBJECTS_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOP) 
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c
all: loops recursives recursived loopd mains maindloop maindrec	
clean:
	rm -f *.o *.a *.so maindloop maindrec mains