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


LichtStrip::LichtStrip(LichtEffect& effect) {
	// TODO Auto-generated constructor stub
	voegToe(effect);
}


LichtStrip::~LichtStrip() {
	// TODO Auto-generated destructor stub
}

void LichtStrip::shift(int x){
	for(int i = 0; i < x; i++){
		for(unsigned int q=0; q<lichten.size(); q++){
			lichten[q]->zetAan();
			usleep(1000000);
			lichten[q]->zetUit();

		}
	}
}

void LichtStrip::zetAan(){
	for(unsigned int x=0; x<lichten.size(); x++){
		lichten[x]->zetAan();
	}
}

void LichtStrip::zetUit(){
	for(unsigned int x=0; x<lichten.size(); x++){
			lichten[x]->zetUit();
		}
}

string LichtStrip::geefConnecties(){
	string connecties;
	for(unsigned int x=0; x<lichten.size(); x++){
		//cout<<"<>";
		cout<<lichten[x]->geefConnecties()<<" ";
	}
	cout<<""<<endl;
	return "";
}


void LichtStrip::voegToe(LichtEffect& effect){
	lichten.push_back(&effect);
	cout<<"Licht: " <<lichten[lichten.size()-1]->geefConnecties() << " toegevoegd"<<endl;
	//cout<<"Licht: "<<effect.geefConnecties()<<" toegevoegd"<<endl;

}

void LichtStrip::verwijder(LichtEffect& effect){
	effect.zetUit();
	lichten.erase(remove(lichten.begin(), lichten.end(), &effect), lichten.end());
}
 /* namespace std */
