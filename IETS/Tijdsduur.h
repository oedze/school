/*
 * Tijdsduur.h
 *
 *  Created on: Dec 21, 2017
 *      Author: oop
 */

#ifndef TIJDSDUUR_H_
#define TIJDSDUUR_H_

class Tijdsduur {
public:
	Tijdsduur();
	Tijdsduur(int s);
	Tijdsduur(int m, int s);
	virtual ~Tijdsduur();

	void eraf(const Tijdsduur& t);
	void erbij(const Tijdsduur& t);
	void maal(int multiplier);
	void print();
	int deTimerTijd();
private:
	int sec;
	void normaliseer();
};

#endif /* TIJDSDUUR_H_ */
