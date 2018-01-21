/*
 * Logled.cpp
 *
 *  Created on: Dec 21, 2017
 *      Author: oop
 */

#include "Logled.h"
#include <iostream>
#include <unistd.h>

using namespace std;

Logled::Logled(string gpioPath, string gpioNumber):gpioPad(gpioPath), gpioNummer(gpioNumber) {
	// TODO Auto-generated constructor stub
	tijd = Tijdsduur(12);
	//init();
	status = false;
}

void Logled::zetAan(){
	if(!status){
		if(tijd.deTimerTijd() > 0){
			tijdStipAan = time(0);
			schrijfNaarFileSysteem("/sys/class/gpio/gpio" + gpioNummer, "/value", "1");
			status = true;
		}


	}
}

string Logled::geefConnecties(){
	return gpioNummer;
}

void Logled::nogTijdTeGaan(){
	tijd.print();
}

void Logled::zetUit(){
	if(status){
		schrijfNaarFileSysteem("/sys/class/gpio/gpio" + gpioNummer, "/value", "0");
		tijd.eraf(Tijdsduur(time(0) - tijdStipAan));
		status = false;
	}
}







void Logled::schrijfNaarFileSysteem(string path, string filename, string value) {
   cout<< path<<" "<<filename <<" "<< value<<" "<<path +filename<<endl;
   fstream fs;
   fs.open((path + filename).c_str(), fstream::out);
   fs << value;
   fs.close();
}

void Logled::init(){
	schrijfNaarFileSysteem("/sys/class/gpio/", "export", gpioNummer);
	//usleep(1000000);
	schrijfNaarFileSysteem("/sys/class/gpio/gpio" + gpioNummer, "/direction", "out");
}


Logled::~Logled() {
	// TODO Auto-generated destructor stub
}

