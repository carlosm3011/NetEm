/*
 * L2Link.h
 *
 *  Created on: May 7, 2010
 *      Author: marcelo
 */

#ifndef L2LINK_H_
#define L2LINK_H_

#include <string>

class L2Link {

private:
	std::string remoteIP;
	int			remotePort;
	int			localPort;

public:
	static int  instId;

	/**
	 * default constructor
	 */
	L2Link(std::string w_remoteIP, int w_remotePort, int w_localPort);

	/**
	 * prints link configuration
	 */
	void printConf();

	/**
	 * sends frame
	 */
	int sendFrame();

	/**
	 * destructor
	 */
	virtual ~L2Link();
};

#endif /* L2LINK_H_ */
