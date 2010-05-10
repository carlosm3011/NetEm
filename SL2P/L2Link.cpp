/*
 * L2Link.cpp
 *
 *  Created on: May 7, 2010
 *      Author: marcelo
 */

#include "L2Link.h"
#include <iostream>

int L2Link::instId = 0;

L2Link::L2Link(std::string w_remoteIP, int w_remotePort, int w_localPort) {
	// copy parameters to class fields
	remoteIP 	= w_remoteIP;
	remotePort 	= w_remotePort;
	localPort 	= w_localPort;
	// --
	L2Link::instId++;
}

void L2Link::printConf() {
	std::cout	<< "Link Instance: " << L2Link::instId << "\n"
				<< "Remote Add   : " << remoteIP << "\n"
				<< "Local Port   : " << localPort << "\n"
				<< "Remote Port  : " << remotePort << "\n"
				<< "\n";
}

L2Link::~L2Link() {
	// TODO Auto-generated destructor stub
}
