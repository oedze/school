/*
 * Led.h
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */
#include <string>
#include <iostream>
#include <fstream>
#include <unistd.h>
#include "LichtEffect.h"

#ifndef LED_H_
#define LED_H_
using namespace std;
//namespace std {

class Led: public LichtEffect {
public:
	Led();
	virtual ~Led();
	virtual void init();
	virtual void zetAan();
	virtual void zetUit();
	virtual void schrijfNaarFileSysteem(string, string, string);
	virtual string geefConnecties();
private:
	int serienummer;
};

//} /* namespace std */

#endif /* LED_H_ */
