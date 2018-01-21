/*
 * SinglLed.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */

#include "MultiLed.h"
#include <time.h>

using namespace std;

//namespace std {

MultiLed::MultiLed(string pinNumber1, string pinNumber2):port1(pinNumber1), port2(pinNumber2) {
	// TODO Auto-generated constructor stub

}

MultiLed::~MultiLed() {
	// TODO Auto-generated destructor stubv
}

void MultiLed::zetAan(){
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port1, "/value", "1");
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port2, "/value", "1");
}

void MultiLed::zetUit(){
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port1, "/value", "0");
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port2, "/value", "0");
}

string MultiLed::geefConnecties(){
	return port1+ " " + port2;
}

void MultiLed::init(){
	schrijfNaarFileSysteem("/sys/class/gpio/", "export", port1);
	schrijfNaarFileSysteem("/sys/class/gpio/", "export", port2);
	//usleep(1000000);
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port1, "/direction", "out");
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + port2, "/direction", "out");
}

//} /* namespace std */
