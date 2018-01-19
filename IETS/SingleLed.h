/*
 * SinglLed.h
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */

#ifndef SINGLELED_H_
#define SINGLELED_H_

#include "Led.h"
#include <ostream>
#include <time.h>
#include <iostream>
using namespace std;
//namespace std {

class SingleLed: public Led {
public:
	SingleLed(string pinNumber);
	virtual ~SingleLed();
	virtual void zetAan();
	virtual void zetUit();
	virtual string geefConnecties();
	virtual void init();
	//virtual void schrijfNaarFileSysteem(string, string, string);
private:
	string port;
};

//} /* namespace std */

#endif /* SINGLELED_H_ */