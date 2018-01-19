/*
 * SinglLed.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */

#include "SingleLed.h"
#include <time.h>

using namespace std;

//namespace std {

SingleLed::SingleLed(string pinNumber):port(pinNumber) {
	// TODO Auto-generated constructor stub

}

SingleLed::~SingleLed() {
	// TODO Auto-generated destructor stubv
}

void SingleLed::zetAan(){
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port, "/value", "1");
}

void SingleLed::zetUit(){
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port, "/value", "0");
}

string SingleLed::geefConnecties(){
	return port;
}

void SingleLed::init(){
	schrijfNaarFileSysteem("/sys/class/gpio/", "export", port);
	//usleep(1000000);
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port, "/direction", "out");
}

//} /* namespace std */
