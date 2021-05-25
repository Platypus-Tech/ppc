all: ppc.c 
	gcc -g -Wall -o ppc ppc.c

clean: 
	$(RM) ppc
