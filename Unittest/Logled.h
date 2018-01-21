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
#include "Led.h"

using namespace std;

#ifndef LOGLED_H_
#define LOGLED_H_

class Logled: public Led{
public:
	Logled(string gpioPath, string gpioNumber);
	virtual ~Logled();
	virtual void zetAan();
	virtual void zetUit();
	bool ledStatus();
	void nogTijdTeGaan();
	virtual string geefConnecties();
	void init();

private:
	string gpioNummer;
	string gpioPad;
	time_t tijdStipAan;

	Tijdsduur tijd;
	bool status;
	void schrijfNaarFileSysteem(string path, string file, string value);
};

#endif /* LOGLED_H_ */
