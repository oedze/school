/*
 * Led.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */

#include "Led.h"
#include <stdlib.h>
using namespace std;
//namespace std {

Led::Led() {
	// TODO Auto-generated constructor stub
	serienummer = rand()%10000;
}

Led::~Led() {
	// TODO Auto-generated destructor stub
}

void Led::init(){

}

void Led::zetAan(){

}
void Led::zetUit(){

}

void Led::schrijfNaarFileSysteem(string path, string filename, string value) {
   //cout<< path<<" "<<filename <<" "<< value<<" "<<path +filename<<endl;
   fstream fs;
   fs.open((path + filename).c_str(), fstream::out);
   fs << value;
   fs.close();
}

string Led::geefConnecties(){
	return "";
}
//} /* namespace std */
