/*
 * Logled.h
 *
 *  Created on: Dec 21, 2017
 *      Author: oop
 */

#include <fstream>
#include <iostream>
#include <string>

#include "Tijdsduur.h"

using namespace std;

#ifndef LOGLED_H_
#define LOGLED_H_

class Logled {
public:
	Logled(string gpioPath, string gpioNumber);
	virtual ~Logled();
	void zetAan();
	void zetUit();
	bool ledStatus();
	void nogTijdTeGaan();
private:
	string gpioNummer;
	string gpioPad;
	time_t tijdStipAan;
	void init();
	Tijdsduur tijd;
	bool status = false;
	void schrijfNaarFileSysteem(string path, string file, string value);
};

#endif /* LOGLED_H_ */
