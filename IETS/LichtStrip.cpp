/*
 * LichtStrip.cpp
 *
 *  Created on: Jan 16, 2018
 *      Author: oop
 */

#include "LichtStrip.h"

using namespace std;

LichtStrip::LichtStrip() {
	// TODO Auto-generated constructor stub
}

/*
LichtStrip::LichtStrip(LichtEffect& effect) {
	// TODO Auto-generated constructor stub
	voegToe(effect);
}
*/

LichtStrip::~LichtStrip() {
	// TODO Auto-generated destructor stub
}

void LichtStrip::shift(int x){

}

void LichtStrip::zetAan(){
	for(int x=0; x<lichten.size(); x++){
		lichten[x].zetAan();
	}
}

void LichtStrip::zetUit(){

}

string LichtStrip::geefConnecties(){
	string connecties;
	for(unsigned int x=0; x<lichten.size(); x++){
		connecties += lichten[x].geefConnecties() + " ";
	}
	return connecties;
}


void LichtStrip::voegToe(LichtEffect& effect){
	lichten.push_back(effect);
}

void LichtStrip::verwijder(LichtEffect& effect){

}
 /* namespace std */
