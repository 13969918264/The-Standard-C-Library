/*
	赵子豪@20191106
*/
/*	xassert.c	*/
/*	_Assert function	*/
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void _Assert(char *mesg)
{			/*	print assertion message and abort	*/
	fputs(mesg, stderr);
	fputs(" -- assertion failed\n", stderr);
	abort();
}
