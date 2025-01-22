#include <stdio.h>
void main(int argc, char *argv[])
	{int i;
	for (i=0; i< argc;i++)
		printf("command line agrument [%d] = %s\n", i, argv[i]);
	}