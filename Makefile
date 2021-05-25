all: ppc.c
	cc -g -o ppc ppc.c

clean:
	$(RM) ppc
