/*
 * SinglLed.h
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */

#ifndef MULTILED_H_
#define MULTILED_H_

#include "Led.h"
#include <ostream>
#include <time.h>
#include <iostream>
using namespace std;
//namespace std {

class MultiLed: public Led {
public:
	MultiLed(string pinNumber1, string pinNumber2);
	virtual ~MultiLed();
	virtual void zetAan();
	virtual void zetUit();
	virtual string geefConnecties();
	virtual void init();
	//virtual void schrijfNaarFileSysteem(string, string, string);
private:
	string port1;
	string port2;
};

//} /* namespace std */

#endif /* SINGLELED_H_ */
