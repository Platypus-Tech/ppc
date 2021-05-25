all: src/ppc.c
	cc -g -o ppc src/ppc.c

clean:
	$(RM) ppc
