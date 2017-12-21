/*
 * Tijdsduur.cpp
 *
 *  Created on: Dec 21, 2017
 *      Author: oop
 */

#include <iostream>
#include "Tijdsduur.h"

using namespace std;

Tijdsduur::Tijdsduur():sec(0) {
	// TODO Auto-generated constructor stub
	sec = 0;
}

Tijdsduur::Tijdsduur(int s):sec(s){
	normaliseer();
}

Tijdsduur::Tijdsduur(int m, int s):sec(s){
	sec += m*60;
}

void Tijdsduur::eraf(const Tijdsduur& t){
	sec -= t.sec;
}

void Tijdsduur::erbij(const Tijdsduur& t){
	sec += t.sec;

}

void Tijdsduur::maal(int multiplier){
	sec *= multiplier;

}

int Tijdsduur::deTimerTijd(){
	return sec;
}

void Tijdsduur::normaliseer(){

}

void Tijdsduur::print(){
	int min = sec/60;
	int tempSec = sec%60;
	cout<<min + " minuten en "+tempSec+" seconden"<<endl;
}

Tijdsduur::~Tijdsduur() {
	// TODO Auto-generated destructor stub
}

