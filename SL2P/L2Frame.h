/*
 * L2Frame.h
 *
 *  Created on: May 10, 2010
 *      Author: marcelo
 */

#ifndef L2FRAME_H_
#define L2FRAME_H_

class L2Frame {

	char *payload;
	int  psize;
	int  numsec;

public:
	L2Frame(char *w_payload, int w_len);

	bool setPayload(char *w_payload, int w_len);

	char *getPayload();

	char *serialize();

	bool unserialize(char *w_frame, int w_len);

	virtual ~L2Frame();
};

#endif /* L2FRAME_H_ */
