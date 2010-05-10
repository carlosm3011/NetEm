//============================================================================
// Name        : SL2P.cpp
// Author      : Carlos M. Martinez - INCO
// Version     :
// Copyright   : This code is in the public domain
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include "L2Link.h"

int main(void) {
	puts("Hello World!!!");

	L2Link *link1 = new L2Link("127.0.0.1", 5555, 5555);
	link1->printConf();

	L2Link *link2 = new L2Link("127.0.0.1", 5556, 5556);
	link2->printConf();

	return EXIT_SUCCESS;
}
