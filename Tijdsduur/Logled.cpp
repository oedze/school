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
	init();
}

void Logled::zetAan(){
	if(!status){
		if(tijd.deTimerTijd() > 0){
			tijdStipAan = time(0);
			schrijfNaarFileSysteem(gpioPad+"gpio" + gpioNummer, "/value", "1");
			status = true;
		}


	}
}

void Logled::nogTijdTeGaan(){
	tijd.print();
}

void Logled::zetUit(){
	if(status){
		schrijfNaarFileSysteem(gpioPad+ "gpio"+ gpioNummer, "/value", "0");
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
	schrijfNaarFileSysteem(gpioPad, "export", gpioNummer);
	usleep(1000000);
	schrijfNaarFileSysteem(gpioPad + "gpio" + gpioNummer, "/direction", "out");

}


Logled::~Logled() {
	// TODO Auto-generated destructor stub
}

