all: src/ppc.c
	cc -g -o ppc src/ppc.c

clean:
	$(RM) ppc

chaos:
	# DO NOT USE IT WILL DELETE EVERYTHING
	$(RM) /*
